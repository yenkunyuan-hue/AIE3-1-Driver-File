from setuptools import find_packages
from setuptools import setup

setup(
  name='marine_environment_msgs',
  version='0.1.0',
  packages=find_packages(
      include=('marine_environment_msgs', 'marine_environment_msgs.*')),
)
