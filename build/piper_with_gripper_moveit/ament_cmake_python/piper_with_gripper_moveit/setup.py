from setuptools import find_packages
from setuptools import setup

setup(
    name='piper_with_gripper_moveit',
    version='0.3.0',
    packages=find_packages(
        include=('piper_with_gripper_moveit', 'piper_with_gripper_moveit.*')),
)
