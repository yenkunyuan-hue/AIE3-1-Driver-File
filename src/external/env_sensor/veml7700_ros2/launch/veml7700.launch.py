from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument('bus', default_value='1'),
        DeclareLaunchArgument('address', default_value='16'),
        DeclareLaunchArgument('frame_id', default_value='veml7700'),
        DeclareLaunchArgument('publish_rate_hz', default_value='5.0'),
        DeclareLaunchArgument('gain', default_value='1/8'),
        DeclareLaunchArgument('integration_time_ms', default_value='100'),
        DeclareLaunchArgument('auto_range', default_value='true'),
        DeclareLaunchArgument('auto_low_threshold_counts', default_value='1000'),
        DeclareLaunchArgument('auto_high_threshold_counts', default_value='55000'),
        DeclareLaunchArgument('auto_max_adjustments_per_read', default_value='4'),
        DeclareLaunchArgument('high_lux_correction', default_value='true'),
        DeclareLaunchArgument('log_autorange_changes', default_value='true'),
        Node(
            package='veml7700_ros2',
            executable='veml7700_node',
            name='veml7700_node',
            output='screen',
            parameters=[{
                'bus': ParameterValue(LaunchConfiguration('bus'), value_type=int),
                'address': ParameterValue(LaunchConfiguration('address'), value_type=int),
                'frame_id': LaunchConfiguration('frame_id'),
                'publish_rate_hz': ParameterValue(LaunchConfiguration('publish_rate_hz'), value_type=float),
                'gain': LaunchConfiguration('gain'),
                'integration_time_ms': ParameterValue(LaunchConfiguration('integration_time_ms'), value_type=int),
                'auto_range': ParameterValue(LaunchConfiguration('auto_range'), value_type=bool),
                'auto_low_threshold_counts': ParameterValue(LaunchConfiguration('auto_low_threshold_counts'), value_type=int),
                'auto_high_threshold_counts': ParameterValue(LaunchConfiguration('auto_high_threshold_counts'), value_type=int),
                'auto_max_adjustments_per_read': ParameterValue(LaunchConfiguration('auto_max_adjustments_per_read'), value_type=int),
                'high_lux_correction': ParameterValue(LaunchConfiguration('high_lux_correction'), value_type=bool),
                'log_autorange_changes': ParameterValue(LaunchConfiguration('log_autorange_changes'), value_type=bool),
            }],
        ),
    ])
