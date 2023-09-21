#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from my_robot_interfaces.srv import SetLed
from my_robot_interfaces.msg import LedPanelState

class LedPanelNode(Node):
    def __init__(self):
        super().__init__("led_panel_server")
        self.server_ = self.create_service(
            SetLed, "/set_led", self.callback_set_led)
        self.get_logger().info("Set LED server has been started.")
        self.led_publisher_ = self.create_publisher(LedPanelState, "led_panel_state", 10)

    def callback_set_led(self, request, response):
        response.success = True
        self.get_logger().info(str(request.led) + " + " +
                               str(request.state))
        self.publish_led(request.led, request.state)
        
        return response 
    
    def publish_led(self, led, state):
        msg = LedPanelState()
        msg.led = led
        msg.state = state
        self.led_publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = LedPanelNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
