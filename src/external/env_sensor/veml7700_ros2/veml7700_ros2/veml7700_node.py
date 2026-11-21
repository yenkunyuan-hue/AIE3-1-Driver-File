from __future__ import annotations

import math

import rclpy
from rcl_interfaces.msg import SetParametersResult
from rclpy.node import Node
from sensor_msgs.msg import Illuminance

from .veml7700_driver import VEML7700, VEML7700Config


class VEML7700Node(Node):
    def __init__(self) -> None:
        super().__init__('veml7700_node')

        self.declare_parameter('bus', 1)
        self.declare_parameter('address', 0x10)
        self.declare_parameter('frame_id', 'veml7700')
        self.declare_parameter('topic', '/veml7700/illuminance')
        self.declare_parameter('publish_rate_hz', 5.0)
        self.declare_parameter('gain', '1/8')
        self.declare_parameter('integration_time_ms', 100)
        self.declare_parameter('auto_range', True)
        self.declare_parameter('auto_low_threshold_counts', 1000)
        self.declare_parameter('auto_high_threshold_counts', 55000)
        self.declare_parameter('auto_max_adjustments_per_read', 4)
        self.declare_parameter('high_lux_correction', True)
        self.declare_parameter('log_autorange_changes', True)

        config = VEML7700Config(
            bus=int(self.get_parameter('bus').value),
            address=int(self.get_parameter('address').value),
            gain=str(self.get_parameter('gain').value),
            integration_time_ms=int(self.get_parameter('integration_time_ms').value),
        )
        self.frame_id = str(self.get_parameter('frame_id').value)
        topic = str(self.get_parameter('topic').value)
        rate = float(self.get_parameter('publish_rate_hz').value)

        self.driver = VEML7700(config)
        self.publisher = self.create_publisher(Illuminance, topic, 10)
        self.add_on_set_parameters_callback(self._on_parameter_update)
        self.timer = self.create_timer(1.0 / max(rate, 0.1), self._timer_cb)
        self.get_logger().info(
            'VEML7700 started on I2C bus '
            f'{config.bus}, address 0x{config.address:02x}, topic {topic}, '
            f'gain {config.gain}, integration {config.integration_time_ms} ms, '
            f'auto_range {bool(self.get_parameter("auto_range").value)}'
        )

    def destroy_node(self) -> bool:
        try:
            self.driver.close()
        finally:
            return super().destroy_node()

    def _on_parameter_update(self, params):
        update_gain = None
        update_it = None
        for param in params:
            if param.name == 'gain':
                update_gain = str(param.value)
            elif param.name == 'integration_time_ms':
                update_it = int(param.value)

        if update_gain is None and update_it is None:
            return SetParametersResult(successful=True)

        try:
            self.driver.update_measurement_config(
                gain=update_gain,
                integration_time_ms=update_it,
                settle=True,
            )
        except Exception as exc:  # noqa: BLE001, ROS should receive the reason.
            return SetParametersResult(successful=False, reason=str(exc))

        self.get_logger().info(
            f'Updated VEML7700 measurement config: '
            f'gain {self.driver.config.gain}, '
            f'integration {self.driver.config.integration_time_ms} ms'
        )
        return SetParametersResult(successful=True)

    def _timer_cb(self) -> None:
        auto_range = bool(self.get_parameter('auto_range').value)
        high_lux_correction = bool(self.get_parameter('high_lux_correction').value)

        try:
            if auto_range:
                reading = self.driver.read_autorange(
                    low_threshold_counts=int(self.get_parameter('auto_low_threshold_counts').value),
                    high_threshold_counts=int(self.get_parameter('auto_high_threshold_counts').value),
                    max_adjustments=int(self.get_parameter('auto_max_adjustments_per_read').value),
                    high_lux_correction=high_lux_correction,
                )
            else:
                reading = self.driver.read(high_lux_correction=high_lux_correction)
        except OSError as exc:
            self.get_logger().error(f'I2C read failed: {exc}')
            return
        except ValueError as exc:
            self.get_logger().error(f'Invalid VEML7700 configuration: {exc}')
            return

        if reading.autorange_changed and bool(self.get_parameter('log_autorange_changes').value):
            self.get_logger().info(
                f'Auto ranged VEML7700 to gain {reading.gain}, '
                f'integration {reading.integration_time_ms} ms, '
                f'raw {reading.raw_als}, lux {reading.lux:.3f}'
            )

        if reading.saturated:
            self.get_logger().warn(
                f'VEML7700 ALS count is near saturation: raw {reading.raw_als}. '
                'Lux is likely a lower bound.'
            )

        msg = Illuminance()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = self.frame_id
        msg.illuminance = reading.lux
        msg.variance = math.nan
        self.publisher.publish(msg)


def main(args=None) -> None:
    rclpy.init(args=args)
    node = VEML7700Node()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
