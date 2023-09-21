#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial

from my_robot_interfaces.srv import SetLed

class BatteryNode(Node):
    def __init__(self):
        super().__init__("battery_node")
        self.seconds = 0
        self.ledNumber = 3 #starts powered
        self.state = "on" #starts on

        self.timer_ = self.create_timer(1, self.fakeEvolution)
        self.get_logger().info("Battery Node has been started")

    def fakeEvolution(self):
        self.seconds += 1 # add an extra second each time?

        if (self.seconds == 4): # lowest power
            self.ledNumber = 3
            self.state = "on"
            self.call_set_led(self.ledNumber, self.state)

        elif (self.seconds == 10): # reset/charged
            self.ledNumber = 0
            self.state = "off"
            self.call_set_led(self.ledNumber, self.state)
            self.seconds = 0

        # print(self.seconds)
        # print(self.state)
        # print(self.ledNumber)

    def call_set_led(self, ledNumber, state):
        client = self.create_client(SetLed, "/set_led")

        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting SetLed Server")

        request = SetLed.Request()
        request.led = ledNumber
        request.state = state

        future = client.call_async(request)
        future.add_done_callback(self.callback_call_set_led)
        
    # Call back to output if a success occured (true/false, no further action necessary
    def callback_call_set_led(self, future):
        try:
            response = future.result()
            self.get_logger().info(str(response.success))
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))


def main(args=None):
    rclpy.init(args=args)
    node = BatteryNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
