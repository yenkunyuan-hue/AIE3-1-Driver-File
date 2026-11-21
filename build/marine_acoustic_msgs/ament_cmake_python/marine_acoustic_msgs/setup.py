from setuptools import find_packages
from setuptools import setup

setup(
  name='marine_acoustic_msgs',
  version='2.1.0',
  packages=find_packages(
      include=('marine_acoustic_msgs', 'marine_acoustic_msgs.*')),
)
