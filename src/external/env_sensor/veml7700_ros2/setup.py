from setuptools import setup

package_name = 'veml7700_ros2'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/veml7700.launch.py']),
    ],
    install_requires=['setuptools', 'smbus2'],
    zip_safe=True,
    maintainer='Maintainer',
    maintainer_email='user@example.com',
    description='ROS 2 driver for the Vishay VEML7700 ambient light sensor.',
    license='MIT',
    entry_points={
        'console_scripts': [
            'veml7700_node = veml7700_ros2.veml7700_node:main',
        ],
    },
)
