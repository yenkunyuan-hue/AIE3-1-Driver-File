from glob import glob
from setuptools import setup

package_name = 'as7341_ros2'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/as7341.launch.py']),
        ('share/' + package_name + '/config', glob('config/*.yaml') + glob('config/*.csv')),
    ],
    install_requires=['setuptools', 'smbus2', 'PyYAML'],
    zip_safe=True,
    maintainer='Maintainer',
    maintainer_email='user@example.com',
    description='ROS 2 driver for the ams OSRAM AS7341 spectral sensor.',
    license='MIT',
    entry_points={
        'console_scripts': [
            'as7341_node = as7341_ros2.as7341_node:main',
        ],
    },
)
