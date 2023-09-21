#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from example_interfaces.srv import SetBool

class numberCounter(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("number_counter") # MODIFY NAME

        self.count = 0  
        self.publisher_ = self.create_publisher(Int64, "number_count", 10)
        self.subscriber_ = self.create_subscription(Int64, "/number", self.callback_numberCount, 10)
        self.server_ = self.create_service(
            SetBool, "reset_number_count", self.callback_reset_number_count)


    def callback_reset_number_count(self, request, response):
        print(request.data)
        if (request.data == False):
            self.count = 0

        response.success = True
        response.message = "Nice job"
        return response


    def callback_numberCount(self, msg):
        self.count = self.count + msg.data
        print(self.count)
        pubCount = Int64()
        pubCount.data = self.count
        self.publisher_.publish(pubCount)


def main(args=None):
    rclpy.init(args=args)
    node = numberCounter() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
