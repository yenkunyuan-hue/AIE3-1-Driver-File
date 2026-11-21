from setuptools import find_packages
from setuptools import setup

setup(
  name='aanderaa_smart_sensor',
  version='0.2.1',
  packages=find_packages(
      include=('aanderaa_smart_sensor', 'aanderaa_smart_sensor.*')),
)
