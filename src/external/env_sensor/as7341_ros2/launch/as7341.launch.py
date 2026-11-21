from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    default_matrix_file = PathJoinSubstitution([
        FindPackageShare('as7341_ros2'),
        'config',
        'as7341_spectral_matrix_verodin_v3.csv',
    ])

    args = [
        DeclareLaunchArgument('bus', default_value='1'),
        DeclareLaunchArgument('address', default_value='57'),
        DeclareLaunchArgument('frame_id', default_value='as7341'),
        DeclareLaunchArgument('publish_rate_hz', default_value='2.0'),
        DeclareLaunchArgument('atime', default_value='29'),
        DeclareLaunchArgument('astep', default_value='599'),
        DeclareLaunchArgument('gain', default_value='4'),
        DeclareLaunchArgument('auto_range', default_value='true'),
        DeclareLaunchArgument('low_threshold_raw', default_value='1000'),
        DeclareLaunchArgument('high_threshold_raw', default_value='50000'),
        DeclareLaunchArgument('auto_range_visible_only', default_value='true'),
        DeclareLaunchArgument('auto_range_reread_after_change', default_value='true'),
        DeclareLaunchArgument('calibration_mode', default_value='exposure_normalized'),
        DeclareLaunchArgument('calibration_matrix_file', default_value=default_matrix_file),
        DeclareLaunchArgument('calibration_scale', default_value='1.0'),
    ]

    node = Node(
        package='as7341_ros2',
        executable='as7341_node',
        name='as7341_node',
        output='screen',
        parameters=[{
            'bus': LaunchConfiguration('bus'),
            'address': LaunchConfiguration('address'),
            'frame_id': LaunchConfiguration('frame_id'),
            'publish_rate_hz': LaunchConfiguration('publish_rate_hz'),
            'atime': LaunchConfiguration('atime'),
            'astep': LaunchConfiguration('astep'),
            'gain': LaunchConfiguration('gain'),
            'auto_range': LaunchConfiguration('auto_range'),
            'low_threshold_raw': LaunchConfiguration('low_threshold_raw'),
            'high_threshold_raw': LaunchConfiguration('high_threshold_raw'),
            'auto_range_visible_only': LaunchConfiguration('auto_range_visible_only'),
            'auto_range_reread_after_change': LaunchConfiguration('auto_range_reread_after_change'),
            'calibration_mode': LaunchConfiguration('calibration_mode'),
            'calibration_matrix_file': LaunchConfiguration('calibration_matrix_file'),
            'calibration_scale': LaunchConfiguration('calibration_scale'),
        }],
    )

    return LaunchDescription(args + [node])
