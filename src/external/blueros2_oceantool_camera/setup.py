from setuptools import setup

package_name = 'blueros2_oceantool_camera'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='laser',
    maintainer_email='laser@laser.com',
    description='OceanTool C3-30 camera ROS2 node',
    license='MIT',
    entry_points={
        'console_scripts': [
            'camera_node = blueros2_oceantool_camera.camera_node:main',
        ],
    },
)
