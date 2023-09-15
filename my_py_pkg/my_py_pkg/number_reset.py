#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial
from example_interfaces.srv import SetBool


class NumberResetNode(Node):
    def __init__(self):
        super().__init__("reset_counter_client")
        self.call_reset_counter_server(False) # Actual function call

    def call_reset_counter_server(self, bool_val):
        client = self.create_client(SetBool, "reset_number_count")

        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server Reset Number Count...")

        request = SetBool.Request()
        request.data = bool_val

        future = client.call_async(request)
        future.add_done_callback(
            partial(self.callback_call_reset_number))

    def callback_call_reset_number(self, future):
        try:
            response = future.result()
            print(type(response.success))
            print(type(response.message))
            # self.get_logger().info(response.success)
            # self.get_logger().info(response.message)

        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))


def main(args=None):
    rclpy.init(args=args)
    node = NumberResetNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
