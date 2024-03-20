#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import yaml
from example_interfaces.msg import Int64


class LaunchYamlExample(Node):
    def __init__(self):
        super().__init__("launch_yaml_publisher")

        self.declare_parameter("config_yaml_location", "")
        # self.declare_parameter("test_value", 1)
        # print(self.get_parameter("test_value").value)
        config_yaml_file_path = self.get_parameter("config_yaml_location").value

        print(config_yaml_file_path)
        # Read the YAML file
        with open(config_yaml_file_path, "r") as file:
            yaml_data = yaml.safe_load(file)

        # Access the data from the YAML file
        node_parameters = yaml_data["node_parameters"]

        self.number_ = node_parameters["number_to_publish"]
        self.publish_frequency = node_parameters["publish_frequency"]

        self.number_publisher_ = self.create_publisher(Int64, "number", 10)
        self.number_timer_ = self.create_timer(1.0 / self.publish_frequency, self.publish_number)
        self.get_logger().info("Number publisher has been started.")


    def publish_number(self):
        msg = Int64()
        msg.data = self.number_
        self.number_publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = LaunchYamlExample()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
