from __future__ import annotations

from typing import List

import rclpy
from rcl_interfaces.msg import SetParametersResult
from rclpy.node import Node

from as7341_ros2.msg import AS7341Reading
from marine_environment_msgs.msg import SpectralReading

from .as7341_calibration import AS7341Calibrator, DEFAULT_INPUT_CHANNELS
from .as7341_driver import AS7341, AS7341Config, AS7341Sample


class AS7341Node(Node):
    def __init__(self) -> None:
        super().__init__('as7341_node')

        self.declare_parameter('bus', 1)
        self.declare_parameter('address', 0x39)
        self.declare_parameter('frame_id', 'as7341')
        self.declare_parameter('publish_rate_hz', 2.0)
        self.declare_parameter('atime', 29)
        self.declare_parameter('astep', 599)
        self.declare_parameter('gain', 4)
        self.declare_parameter('raw_topic', '/as7341/raw')
        self.declare_parameter('spectral_topic', '/as7341/spectral')

        self.declare_parameter('auto_range', True)
        self.declare_parameter('low_threshold_raw', 1000)
        self.declare_parameter('high_threshold_raw', 50000)
        self.declare_parameter('auto_range_visible_only', True)
        self.declare_parameter('auto_range_gains', [1, 2, 4, 8, 16, 32, 64, 128, 256, 512])
        self.declare_parameter('auto_range_integration_times_ms', [10.0, 25.0, 50.0, 100.0])
        self.declare_parameter('auto_range_preferred_atime', 29)
        self.declare_parameter('auto_range_reread_after_change', True)

        self.declare_parameter('calibration_mode', 'exposure_normalized')
        self.declare_parameter('calibration_matrix_file', '')
        self.declare_parameter('dark_offsets', [0.0] * len(DEFAULT_INPUT_CHANNELS))
        self.declare_parameter('calibration_scale', 1.0)

        config = AS7341Config(
            bus=int(self.get_parameter('bus').value),
            address=int(self.get_parameter('address').value),
            atime=int(self.get_parameter('atime').value),
            astep=int(self.get_parameter('astep').value),
            gain=int(self.get_parameter('gain').value),
        )
        self.frame_id = str(self.get_parameter('frame_id').value)
        rate = float(self.get_parameter('publish_rate_hz').value)
        raw_topic = str(self.get_parameter('raw_topic').value)
        spectral_topic = str(self.get_parameter('spectral_topic').value)

        self.driver = AS7341(config)
        self.auto_range_states = self._build_autorange_states()
        self.calibrator = self._build_calibrator()

        self.raw_pub = self.create_publisher(AS7341Reading, raw_topic, 10)
        self.spectral_pub = self.create_publisher(SpectralReading, spectral_topic, 10)
        self.add_on_set_parameters_callback(self._on_parameter_change)
        self.timer = self.create_timer(1.0 / max(rate, 0.1), self._timer_cb)

        self.get_logger().info(
            f'AS7341 started on I2C bus {config.bus}, address 0x{config.address:02x}, topics {raw_topic}, {spectral_topic}'
        )
        self.get_logger().info(
            f'AS7341 calibration_mode={self.get_parameter("calibration_mode").value}, auto_range={self.get_parameter("auto_range").value}'
        )

    def destroy_node(self) -> bool:
        try:
            self.driver.close()
        finally:
            return super().destroy_node()

    def _param_value(self, name: str, overrides: dict | None = None):
        if overrides and name in overrides:
            return overrides[name]
        return self.get_parameter(name).value

    def _build_autorange_states(self, overrides: dict | None = None) -> List[AS7341Config]:
        return AS7341.build_autorange_states(
            bus=int(self._param_value('bus', overrides)),
            address=int(self._param_value('address', overrides)),
            integration_times_ms=[float(v) for v in self._param_value('auto_range_integration_times_ms', overrides)],
            gains=[int(v) for v in self._param_value('auto_range_gains', overrides)],
            preferred_atime=int(self._param_value('auto_range_preferred_atime', overrides)),
        )

    def _build_calibrator(self, overrides: dict | None = None) -> AS7341Calibrator:
        return AS7341Calibrator(
            mode=str(self._param_value('calibration_mode', overrides)),
            matrix_file=str(self._param_value('calibration_matrix_file', overrides)),
            dark_offsets=[float(v) for v in self._param_value('dark_offsets', overrides)],
            calibration_scale=float(self._param_value('calibration_scale', overrides)),
        )

    def _on_parameter_change(self, params) -> SetParametersResult:
        try:
            changed_names = {p.name for p in params}
            updates = {p.name: p.value for p in params}

            if {'gain', 'atime', 'astep'} & changed_names:
                self.driver.reconfigure(
                    gain=int(updates.get('gain', self.driver.config.gain)),
                    atime=int(updates.get('atime', self.driver.config.atime)),
                    astep=int(updates.get('astep', self.driver.config.astep)),
                )

            if {
                'auto_range_gains',
                'auto_range_integration_times_ms',
                'auto_range_preferred_atime',
            } & changed_names:
                self.auto_range_states = self._build_autorange_states(updates)

            if {
                'calibration_mode',
                'calibration_matrix_file',
                'dark_offsets',
                'calibration_scale',
            } & changed_names:
                self.calibrator = self._build_calibrator(updates)

        except Exception as exc:
            return SetParametersResult(successful=False, reason=str(exc))
        return SetParametersResult(successful=True)

    def _timer_cb(self) -> None:
        try:
            sample = self.driver.read_all_channels()
            sample = self._autorange_if_needed(sample)
        except (OSError, TimeoutError, ValueError) as exc:
            self.get_logger().error(f'AS7341 read failed: {exc}')
            return

        stamp = self.get_clock().now().to_msg()
        self.raw_pub.publish(self._make_raw_msg(sample, stamp))
        self.spectral_pub.publish(self._make_spectral_msg(sample, stamp))

    def _autorange_if_needed(self, sample: AS7341Sample) -> AS7341Sample:
        if not bool(self.get_parameter('auto_range').value):
            return sample

        old_config = self.driver.config
        values = sample.visible_values if bool(self.get_parameter('auto_range_visible_only').value) else sample.all_values
        max_raw = max(values) if values else 0

        changed = self.driver.autorange_once(
            sample=sample,
            states=self.auto_range_states,
            low_threshold_raw=int(self.get_parameter('low_threshold_raw').value),
            high_threshold_raw=int(self.get_parameter('high_threshold_raw').value),
            use_visible_only=bool(self.get_parameter('auto_range_visible_only').value),
        )
        if changed:
            self.get_logger().info(
                f'AS7341 autorange changed: max_raw_before={max_raw}, '
                f'old_gain={old_config.gain}, old_atime={old_config.atime}, old_astep={old_config.astep}, '
                f'new_gain={self.driver.config.gain}, new_atime={self.driver.config.atime}, '
                f'new_astep={self.driver.config.astep}, '
                f'new_integration={self.driver.integration_time_ms:.2f} ms'
            )
            if bool(self.get_parameter('auto_range_reread_after_change').value):
                return self.driver.read_all_channels()
        return sample

    def _make_raw_msg(self, sample: AS7341Sample, stamp) -> AS7341Reading:
        msg = AS7341Reading()
        msg.header.stamp = stamp
        msg.header.frame_id = self.frame_id
        msg.f1_415nm = sample.f1_415nm
        msg.f2_445nm = sample.f2_445nm
        msg.f3_480nm = sample.f3_480nm
        msg.f4_515nm = sample.f4_515nm
        msg.f5_555nm = sample.f5_555nm
        msg.f6_590nm = sample.f6_590nm
        msg.f7_630nm = sample.f7_630nm
        msg.f8_680nm = sample.f8_680nm
        msg.clear = sample.clear
        msg.nir = sample.nir
        msg.flicker_hz = sample.flicker_hz
        msg.integration_time_ms = float(sample.integration_time_ms)
        msg.gain = int(sample.gain)
        msg.atime = int(sample.atime)
        msg.astep = int(sample.astep)
        return msg

    def _make_spectral_msg(self, sample: AS7341Sample, stamp) -> SpectralReading:
        raw_values = sample.all_values
        result = self.calibrator.apply(raw_values, sample.gain, sample.integration_time_ms)

        msg = SpectralReading()
        msg.header.stamp = stamp
        msg.header.frame_id = self.frame_id
        msg.channel_name = list(result.channel_names)
        msg.wavelength_nm = [float(v) for v in result.wavelengths_nm]
        msg.fwhm_nm = [float(v) for v in result.fwhm_nm]
        msg.raw = [int(v) for v in raw_values]
        msg.value = [float(v) for v in result.values]
        msg.unit = result.unit
        return msg


def main(args=None) -> None:
    rclpy.init(args=args)
    node = AS7341Node()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
