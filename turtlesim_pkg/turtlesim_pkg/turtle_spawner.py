#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial
import random


from turtlesim.msg import Pose
from turtlesim.srv import Spawn
from turtlesim.srv import Kill

from geometry_msgs.msg import Twist
from geometry_msgs.msg import Vector3
from turtlesim_pkg_msgs.msg import Turtle
from turtlesim_pkg_msgs.msg import TurtleArray
from turtlesim_pkg_msgs.srv import CatchTurtle



class TurtleSpawner(Node):
    def __init__(self):
        super().__init__("turtle_spawner")
        self.get_logger().info("Turtle Spawner has Started")
        self.turtle_publisher_ = self.create_publisher(TurtleArray, "/alive_turtles", 10)
        self.turtle_arr_subscriber_ = self.create_subscription(
            TurtleArray, "/alive_turtles", self.callback_update_turtle_arr, 10)
    
        # Creating CatchTurtle Service
        self.server_ = self.create_service(
            CatchTurtle, "/catch_turtle", self.callback_catch_turtle)
        self.get_logger().info("Turtle Catch Turtle Service has Started")


        self.timer_ = self.create_timer(10.0, self.call_spawner_server)
        self.turtle_arr = []



    def call_spawner_server(self):
        client = self.create_client(Spawn, "/spawn")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server Turtle Spawner...")

        request = Spawn.Request()
        request.x = random.uniform(-5,10)
        request.y = random.uniform(-5,10)
        request.theta = random.uniform(0,360)
        
        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_call_spawner_server, x_pos = request.x, y_pos = request.y))

    def callback_call_spawner_server(self, future, x_pos, y_pos):
        try:
            response = future.result()
            self.get_logger().info("turtle name is " + str(response.name))
            turtle_msg = Turtle()
            turtle_msg.turtle_name = response.name
            turtle_msg.x_pos = x_pos
            turtle_msg.y_pos = y_pos

            self.turtle_arr.append(turtle_msg) 

            msg = TurtleArray()
            msg.turtle_array = self.turtle_arr

            # Turtle Array Publish
            self.turtle_publisher_.publish(msg)
            # self.turtle_publisher_.publish(turtle_msg)

        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))


    def callback_catch_turtle(self, request, response):

        # this doesnt work by the way...

        # Call for the /kill service
        client = self.create_client(Kill, "/kill")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server Turtle Killer...")

        kill_request = Kill.Request()
        kill_request.name = request.turtle_name # Send a request to Kill on TurtleSim based on service request

        future = client.call_async(kill_request)

        rclpy.spin_until_future_complete(self, future)

        if future.result() is not None:
            self.turtle_arr.remove(request.name)
            msg = TurtleArray()
            msg.turtle_array = self.turtle_arr
            self.turtle_publisher_.publish(msg)
            response.kill_result = True # Kill was succesful
            self.get_logger().warn("KILL")

        else:
            self.get_logger().warning('Service call failed')
            response.kill_result = False # Kill was unsuccesful
            self.get_logger().warn("NO KILL")
                
        # response.kill_result = True
        return response # Return to whoever called the service in the first place

 

    def callback_update_turtle_arr(self, msg):
        self.turtle_arr = msg.turtle_array # Simply updating the array - particularly when catch_turtle is implemented


def main(args=None):
    rclpy.init(args=args)
    node = TurtleSpawner()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
