from setuptools import find_packages, setup
from glob import glob
package_name = 'rig'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', glob('launch/*')),
        ('share/' + package_name + '/config', glob('config/*.yaml')),
        #copy files from launch/ to install/share/rig/launch”
    ],
    package_data={'': ['py.typed']},
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yen',
    maintainer_email='yenkunyuan@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': ['arduino = rig.arudino:main',
                            'sonar_cloud = rig.sonar_pointcloud:main',
                            'reader = rig.data_collector:main'
        ],
    },
)
