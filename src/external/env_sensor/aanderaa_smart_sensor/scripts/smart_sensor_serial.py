#!/usr/bin/env python3
"""ROS 2 Humble driver for Aanderaa Smart Sensors over serial.

Supported measurement records are based on the original ROS 1 driver:
  MEASUREMENT <tab> 4296 -> turbidity and temperature
  MEASUREMENT <tab> 5819 -> conductivity, temperature, salinity, density and sound speed

The field indices are parameterised because Aanderaa text output can vary with
sensor configuration. For pair-like Aanderaa records, the typical value indices are:
  conductivity: 4
  temperature: 6
  salinity: 8
  density: 10
  sound_speed: 12

Optional fields are published when they are present at the configured index or when
label based detection can find them in the serial line.
"""

from __future__ import annotations

import math
import re
import threading
from typing import Iterable, List, Optional

import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter
from rcl_interfaces.msg import ParameterDescriptor
from rclpy.qos import QoSProfile
from sensor_msgs.msg import Temperature
import serial
from std_msgs.msg import String

from aanderaa_smart_sensor.msg import Conductivity, Density, SoundSpeed, Turbidity


class AanderaaSmartSensorSerial(Node):
    """Read Aanderaa Smart Sensor tab separated serial reports and publish ROS 2 topics."""

    def __init__(self) -> None:
        super().__init__('aanderaa_smart_sensor')

        self.declare_parameter('serial_port', '/dev/ttyUSB0')
        self.declare_parameter('baudrate', 9600)
        self.declare_parameter('frame_id', 'smart_sensor_link')
        self.declare_parameter('serial_timeout', 1.0)
        self.declare_parameter('xonxoff', True)
        self.declare_parameter('send_reset_on_start', False)

        self.declare_parameter('raw_topic', 'raw_string')
        self.declare_parameter('turbidity_topic', 'turbidity')
        self.declare_parameter('conductivity_topic', 'conductivity')
        self.declare_parameter('temperature_topic', 'temperature')
        self.declare_parameter('density_topic', 'density')
        self.declare_parameter('sound_speed_topic', 'sound_speed')

        sensor_id_descriptor = ParameterDescriptor(dynamic_typing=True)
        self.declare_parameter('turbidity_sensor_id', '4296', sensor_id_descriptor)
        self.declare_parameter('conductivity_sensor_id', '5819', sensor_id_descriptor)
        self.declare_parameter('turbidity_value_index', 4)
        self.declare_parameter('conductivity_value_index', 4)
        self.declare_parameter('temperature_value_index', 6)
        self.declare_parameter('salinity_value_index', 8)
        self.declare_parameter('density_value_index', 10)
        self.declare_parameter('sound_speed_value_index', 12)
        self.declare_parameter('auto_detect_named_fields', True)

        qos = QoSProfile(depth=10)
        self.raw_pub = self.create_publisher(
            String,
            self.get_parameter('raw_topic').get_parameter_value().string_value,
            qos,
        )
        self.turbidity_pub = self.create_publisher(
            Turbidity,
            self.get_parameter('turbidity_topic').get_parameter_value().string_value,
            qos,
        )
        self.conductivity_pub = self.create_publisher(
            Conductivity,
            self.get_parameter('conductivity_topic').get_parameter_value().string_value,
            qos,
        )
        self.temperature_pub = self.create_publisher(
            Temperature,
            self.get_parameter('temperature_topic').get_parameter_value().string_value,
            qos,
        )
        self.density_pub = self.create_publisher(
            Density,
            self.get_parameter('density_topic').get_parameter_value().string_value,
            qos,
        )
        self.sound_speed_pub = self.create_publisher(
            SoundSpeed,
            self.get_parameter('sound_speed_topic').get_parameter_value().string_value,
            qos,
        )

        self._serial: Optional[serial.Serial] = None
        self._stop_event = threading.Event()
        self._reader_thread: Optional[threading.Thread] = None

        self._open_serial()
        if self.get_parameter('send_reset_on_start').get_parameter_value().bool_value:
            self.reset_sensor()

        self._reader_thread = threading.Thread(target=self._read_loop, daemon=True)
        self._reader_thread.start()

    def _open_serial(self) -> None:
        port = self.get_parameter('serial_port').get_parameter_value().string_value
        baudrate = self.get_parameter('baudrate').get_parameter_value().integer_value
        timeout = self.get_parameter('serial_timeout').get_parameter_value().double_value
        xonxoff = self.get_parameter('xonxoff').get_parameter_value().bool_value

        try:
            self._serial = serial.Serial(
                port=port,
                baudrate=baudrate,
                parity=serial.PARITY_NONE,
                stopbits=serial.STOPBITS_ONE,
                bytesize=serial.EIGHTBITS,
                xonxoff=xonxoff,
                timeout=timeout,
            )
        except serial.SerialException as exc:
            self.get_logger().fatal(f'Failed to open serial port {port}: {exc}')
            raise

        self.get_logger().info(
            f'Opened Aanderaa Smart Sensor serial port {port} at {baudrate} baud, '
            f'xonxoff={xonxoff}, timeout={timeout}s'
        )

    def reset_sensor(self) -> None:
        if self._serial is None or not self._serial.is_open:
            self.get_logger().warning('Cannot reset sensor because the serial port is not open')
            return
        self._serial.write(b'RESET\r\n')
        self.get_logger().info('Sent RESET command to Aanderaa Smart Sensor')

    def _read_loop(self) -> None:
        assert self._serial is not None
        while rclpy.ok() and not self._stop_event.is_set():
            try:
                raw_line = self._serial.readline()
            except serial.SerialException as exc:
                self.get_logger().error(f'Serial read failed: {exc}')
                break

            if not raw_line:
                continue

            line = raw_line.decode('utf-8', errors='replace').strip()
            if not line:
                continue

            self.raw_pub.publish(String(data=line))
            self._parse_and_publish(line)

    def _parse_and_publish(self, line: str) -> None:
        fields = line.split('\t')
        if len(fields) < 2:
            self.get_logger().debug(f'Ignoring short serial line: {line}')
            return

        record_type = fields[0].strip().upper()
        sensor_id = fields[1].strip()
        if record_type != 'MEASUREMENT':
            self.get_logger().debug(f'Ignoring non measurement record: {line}')
            return

        turbidity_sensor_id = self._parameter_as_string('turbidity_sensor_id')
        conductivity_sensor_id = self._parameter_as_string('conductivity_sensor_id')

        if sensor_id == turbidity_sensor_id:
            self._publish_turbidity(fields)
        elif sensor_id == conductivity_sensor_id:
            self._publish_conductivity(fields)
        else:
            self.get_logger().debug(f'Ignoring unsupported sensor id {sensor_id}: {line}')


    def _parameter_as_string(self, name: str) -> str:
        """Return a parameter as a string even when launch/YAML typed it numerically.

        ROS 2 launch may serialize numeric-looking launch arguments such as 4296 as
        integers unless ParameterValue(value_type=str) is used. Keeping this helper
        in the node makes direct YAML parameter files robust as well.
        """
        parameter = self.get_parameter(name)
        if parameter.type_ == Parameter.Type.STRING:
            return parameter.value
        return str(parameter.value)

    def _publish_turbidity(self, fields: List[str]) -> None:
        turbidity_index = self.get_parameter('turbidity_value_index').get_parameter_value().integer_value
        temperature_index = self.get_parameter('temperature_value_index').get_parameter_value().integer_value

        try:
            ntu = self._field_as_float(fields, turbidity_index, 'turbidity')
        except ValueError as exc:
            self.get_logger().warning(str(exc))
            return

        msg = Turbidity()
        self._fill_header(msg)
        msg.ntu = float(ntu)
        self.turbidity_pub.publish(msg)

        self._publish_temperature_if_present(fields, temperature_index)

    def _publish_conductivity(self, fields: List[str]) -> None:
        conductivity_index = self.get_parameter('conductivity_value_index').get_parameter_value().integer_value
        temperature_index = self.get_parameter('temperature_value_index').get_parameter_value().integer_value
        salinity_index = self.get_parameter('salinity_value_index').get_parameter_value().integer_value
        density_index = self.get_parameter('density_value_index').get_parameter_value().integer_value
        sound_speed_index = self.get_parameter('sound_speed_value_index').get_parameter_value().integer_value

        try:
            conductivity = self._field_as_float(fields, conductivity_index, 'conductivity')
        except ValueError as exc:
            self.get_logger().warning(str(exc))
            return

        salinity = self._optional_field_as_float(
            fields,
            salinity_index,
            'salinity',
            aliases=('salinity', 'sal'),
        )

        msg = Conductivity()
        self._fill_header(msg)
        msg.conductivity = float(conductivity)
        msg.salinity = float(salinity) if salinity is not None else math.nan
        self.conductivity_pub.publish(msg)

        density = self._optional_field_as_float(
            fields,
            density_index,
            'density',
            aliases=('density', 'rho', 'water density'),
        )
        if density is not None:
            density_msg = Density()
            self._fill_header(density_msg)
            density_msg.density = float(density)
            self.density_pub.publish(density_msg)

        sound_speed = self._optional_field_as_float(
            fields,
            sound_speed_index,
            'sound speed',
            aliases=('sound speed', 'speed of sound', 'sound_speed', 'soundspeed', 'sound velocity', 'velocity of sound'),
        )
        if sound_speed is not None:
            sound_speed_msg = SoundSpeed()
            self._fill_header(sound_speed_msg)
            sound_speed_msg.sound_speed = float(sound_speed)
            self.sound_speed_pub.publish(sound_speed_msg)

        self._publish_temperature_if_present(fields, temperature_index)

    def _publish_temperature_if_present(self, fields: List[str], temperature_index: int) -> None:
        try:
            temperature_c = self._field_as_float(fields, temperature_index, 'temperature')
        except ValueError as exc:
            self.get_logger().warning(str(exc))
            return

        msg = Temperature()
        self._fill_header(msg)
        msg.temperature = float(temperature_c)
        msg.variance = 0.0
        self.temperature_pub.publish(msg)

    def _fill_header(self, msg) -> None:
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = self.get_parameter('frame_id').get_parameter_value().string_value

    def _optional_field_as_float(
        self,
        fields: List[str],
        index: int,
        field_name: str,
        aliases: Iterable[str],
    ) -> Optional[float]:
        if 0 <= index < len(fields):
            try:
                return self._field_as_float(fields, index, field_name)
            except ValueError as exc:
                self.get_logger().warning(str(exc))
                return None

        auto_detect = self.get_parameter('auto_detect_named_fields').get_parameter_value().bool_value
        if auto_detect:
            return self._field_after_label_as_float(fields, aliases, field_name)

        return None

    @classmethod
    def _field_after_label_as_float(
        cls,
        fields: List[str],
        aliases: Iterable[str],
        field_name: str,
    ) -> Optional[float]:
        normalised_aliases = tuple(cls._normalise_label(alias) for alias in aliases)
        for index, field in enumerate(fields):
            label = cls._normalise_label(field)
            if not any(alias in label for alias in normalised_aliases):
                continue

            for candidate_index in range(index + 1, min(index + 4, len(fields))):
                try:
                    return cls._token_as_float(fields[candidate_index])
                except ValueError:
                    continue

        return None

    @staticmethod
    def _field_as_float(fields: List[str], index: int, field_name: str) -> float:
        if index < 0 or index >= len(fields):
            raise ValueError(
                f'Cannot read {field_name}: index {index} is outside serial field range 0..{len(fields) - 1}'
            )
        try:
            return AanderaaSmartSensorSerial._token_as_float(fields[index])
        except ValueError as exc:
            token = fields[index].strip()
            raise ValueError(f'Cannot parse {field_name} value "{token}" as float') from exc

    @staticmethod
    def _token_as_float(token: str) -> float:
        cleaned = token.strip().replace(',', '.')
        return float(cleaned)

    @staticmethod
    def _normalise_label(label: str) -> str:
        label = label.lower().replace('_', ' ')
        label = re.sub(r'\[[^\]]*\]', ' ', label)
        label = re.sub(r'\([^\)]*\)', ' ', label)
        label = re.sub(r'[^a-z0-9]+', ' ', label)
        return re.sub(r'\s+', ' ', label).strip()

    def destroy_node(self) -> bool:
        self._stop_event.set()
        if self._reader_thread is not None and self._reader_thread.is_alive():
            self._reader_thread.join(timeout=2.0)
        if self._serial is not None and self._serial.is_open:
            self._serial.close()
            self.get_logger().info('Closed Aanderaa Smart Sensor serial port')
        return super().destroy_node()


def main(args: Optional[List[str]] = None) -> None:
    rclpy.init(args=args)
    node = None
    try:
        node = AanderaaSmartSensorSerial()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if node is not None:
            node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
