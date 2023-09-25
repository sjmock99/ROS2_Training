#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from geometry_msgs.msg import Vector3
from turtlesim_pkg_msgs.msg import Turtle
from turtlesim_pkg_msgs.msg import TurtleArray


class TurtleController(Node):
    def __init__(self):
        super().__init__("turtle_controller")
        self.subscriber_ = self.create_subscription(
            Pose, "/turtle1/pose", self.callback_move_to_pose, 10)
        self.publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.turtle_subscriber_ = self.create_subscription(
            TurtleArray, "/alive_turtles", self.callback_choose_turtle, 10)


        self.get_logger().info("Turtle Controller has Started")
        self.x_goal = 5
        self.y_goal = 5
        self.kP = 0.5
        self.target = Turtle()


    def callback_move_to_pose(self, msg):
        curr_x = msg.x
        curr_y = msg.y

        x_error = self.x_goal - curr_x
        y_error = self.y_goal - curr_y       

        # Determine a basic "P" Controller to move towards eventual goal
        pub_msg = Twist()

        linear_vel = Vector3()
        linear_vel.x = self.kP * x_error
        linear_vel.y = self.kP * y_error
        linear_vel.z = 0.0

        angular_vel = Vector3()
        angular_vel.x = 0.0
        angular_vel.y = 0.0
        angular_vel.z = 0.0

        pub_msg.linear = linear_vel
        pub_msg.angular = angular_vel
        self.publisher_.publish(pub_msg)

        # self.get_logger().info(str(msg.x) + " " + str(msg.y))

    def callback_choose_turtle(self, msg):
        turtle_arr = msg.turtle_array
        self.target = turtle_arr.pop(0) # Take off the first element of the array
        self.get_logger().info("X: " + self.target.turtle_name)


def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
