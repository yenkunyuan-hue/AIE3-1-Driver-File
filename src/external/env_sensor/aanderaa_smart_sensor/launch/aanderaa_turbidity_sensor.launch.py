#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    declared_arguments = [
        DeclareLaunchArgument('serial_port', default_value='/dev/ttyUSB0'),
        DeclareLaunchArgument('baudrate', default_value='9600'),
        DeclareLaunchArgument('frame_id', default_value='smart_sensor_link'),
        DeclareLaunchArgument('serial_timeout', default_value='1.0'),
        DeclareLaunchArgument('xonxoff', default_value='true'),
        DeclareLaunchArgument('send_reset_on_start', default_value='false'),
        DeclareLaunchArgument('raw_topic', default_value='raw_string'),
        DeclareLaunchArgument('turbidity_topic', default_value='turbidity'),
        DeclareLaunchArgument('conductivity_topic', default_value='conductivity'),
        DeclareLaunchArgument('temperature_topic', default_value='temperature'),
        DeclareLaunchArgument('density_topic', default_value='density'),
        DeclareLaunchArgument('sound_speed_topic', default_value='sound_speed'),
        DeclareLaunchArgument('turbidity_sensor_id', default_value='4296'),
        DeclareLaunchArgument('conductivity_sensor_id', default_value='5819'),
        DeclareLaunchArgument('turbidity_value_index', default_value='4'),
        DeclareLaunchArgument('conductivity_value_index', default_value='4'),
        DeclareLaunchArgument('temperature_value_index', default_value='6'),
        DeclareLaunchArgument('salinity_value_index', default_value='8'),
        DeclareLaunchArgument('density_value_index', default_value='10'),
        DeclareLaunchArgument('sound_speed_value_index', default_value='12'),
        DeclareLaunchArgument('auto_detect_named_fields', default_value='true'),
    ]

    node = Node(
        package='aanderaa_smart_sensor',
        executable='smart_sensor_serial.py',
        name='aanderaa_smart_sensor',
        output='screen',
        parameters=[{
            'serial_port': ParameterValue(LaunchConfiguration('serial_port'), value_type=str),
            'baudrate': ParameterValue(LaunchConfiguration('baudrate'), value_type=int),
            'frame_id': ParameterValue(LaunchConfiguration('frame_id'), value_type=str),
            'serial_timeout': ParameterValue(LaunchConfiguration('serial_timeout'), value_type=float),
            'xonxoff': ParameterValue(LaunchConfiguration('xonxoff'), value_type=bool),
            'send_reset_on_start': ParameterValue(LaunchConfiguration('send_reset_on_start'), value_type=bool),
            'raw_topic': ParameterValue(LaunchConfiguration('raw_topic'), value_type=str),
            'turbidity_topic': ParameterValue(LaunchConfiguration('turbidity_topic'), value_type=str),
            'conductivity_topic': ParameterValue(LaunchConfiguration('conductivity_topic'), value_type=str),
            'temperature_topic': ParameterValue(LaunchConfiguration('temperature_topic'), value_type=str),
            'density_topic': ParameterValue(LaunchConfiguration('density_topic'), value_type=str),
            'sound_speed_topic': ParameterValue(LaunchConfiguration('sound_speed_topic'), value_type=str),
            'turbidity_sensor_id': ParameterValue(LaunchConfiguration('turbidity_sensor_id'), value_type=str),
            'conductivity_sensor_id': ParameterValue(LaunchConfiguration('conductivity_sensor_id'), value_type=str),
            'turbidity_value_index': ParameterValue(LaunchConfiguration('turbidity_value_index'), value_type=int),
            'conductivity_value_index': ParameterValue(LaunchConfiguration('conductivity_value_index'), value_type=int),
            'temperature_value_index': ParameterValue(LaunchConfiguration('temperature_value_index'), value_type=int),
            'salinity_value_index': ParameterValue(LaunchConfiguration('salinity_value_index'), value_type=int),
            'density_value_index': ParameterValue(LaunchConfiguration('density_value_index'), value_type=int),
            'sound_speed_value_index': ParameterValue(LaunchConfiguration('sound_speed_value_index'), value_type=int),
            'auto_detect_named_fields': ParameterValue(LaunchConfiguration('auto_detect_named_fields'), value_type=bool),
        }],
    )

    return LaunchDescription(declared_arguments + [node])
