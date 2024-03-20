from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os
def generate_launch_description():
    ld = LaunchDescription()

    config = os.path.join(
        get_package_share_directory('my_robot_bringup'),
        'config',
        'example.yaml'
        )

    launch_yaml_example_node = Node(
        package="my_py_pkg",
        executable="launch_yaml_example.py",
        parameters=[{
            "config_yaml_location": config}],
        emulate_tty=True,
        output='screen'
    )

    ld.add_action(launch_yaml_example_node)
    return ld


