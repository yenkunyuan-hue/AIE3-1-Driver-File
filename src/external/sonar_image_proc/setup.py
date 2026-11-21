from setuptools import find_packages, setup

package_name = 'sonar_image_proc'

setup(
    name=package_name,
    version='0.1.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml', 'README.md']),
        ('share/' + package_name + '/launch', ['launch/sonar_pointcloud.launch.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='OpenAI',
    maintainer_email='user@example.com',
    description='ROS 2 Python port of sonar_image_proc sonar_pointcloud',
    license='BSD-3-Clause',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'sonar_pointcloud = sonar_image_proc.sonar_pointcloud:main',
        ],
    },
)
