from setuptools import find_packages
from setuptools import setup

setup(
    name='turtlesim_pkg_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('turtlesim_pkg_msgs', 'turtlesim_pkg_msgs.*')),
)
