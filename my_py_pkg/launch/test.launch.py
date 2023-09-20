from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld = LaunchDescription()

    robot_news_node1 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        # name="robot_news_node1",
        parameters=[
            {"name": "Beeboo"},
            {"led_states": [0,5,7]}
        ]
   
    )


    ld.add_action(robot_news_node1)
    return ld


