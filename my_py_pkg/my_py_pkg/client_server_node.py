import rclpy
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts
from my_robot_interfaces.srv import AddTwoIntsServerCall
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup


class ClientServerNode(Node):
    def __init__(self):
        super().__init__('my_node')


        client_cb_group = MutuallyExclusiveCallbackGroup() # Different callback groups such that a service within a service is not blocking the execution of the callback
        server_cb_group = MutuallyExclusiveCallbackGroup()

        self.server = self.create_service(AddTwoIntsServerCall, 'sum_ints', self.sum_ints, callback_group=server_cb_group)  # Service server
        self.client = self.create_client(AddTwoInts, 'add_two_ints', callback_group=client_cb_group)  # Service client

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')

    def call_add_two_ints(self, request):

        ## Method 1: Not Blocking

        print("Async Call Start")
        future = self.client.call_async(request)  # Initiate the service call asynchronously
        while rclpy.ok():
            print("PROCESSING!")
            if future.done():  # Check if the future is completed
                print("Async Call End")
                try:
                    response = future.result()  # Get the response
                    self.get_logger().info(f'AddTwoInts service call response: {response.sum}')
                    return response.sum
                except Exception as e:
                    self.get_logger().error(f'Service call failed: {e}')
                    return None

            self.get_logger().info('Waiting for service response...')
            rclpy.spin_once(self, timeout_sec=0.1)  # Allow the node to process callbacks


        ## Method 2: Somewhat Blocking - technically asynchronous, but it actually is blocking because program will wait at rclpy.spin_until_future_complete
       
        # self.future = self.client.call_async(request)  # Initiate the service call asynchronously 
        # print("Async Call Start")
        # rclpy.spin_until_future_complete(self, self.future) # another way to wait while the future callback 
        # print("Async Call End")

        # try:
        #     response = self.future.result()  # Get the response
        #     self.get_logger().info(f'AddTwoInts service call response: {response.sum}')
        #     return response.sum
        # except Exception as e:
        #     self.get_logger().error(f'Service call failed: {e}')
        #     return None


        ## Method 3: Sync Call - fully blocking

        # print("Sync Call Start")
        # response = self.client.call(request)  # Initiate the service call asynchronously
        # print("Sync Call End")
        # self.get_logger().info(f'AddTwoInts service call response: {response.sum}')
        # return response.sum


    def sum_ints(self, request, response):

        request_for_client = AddTwoInts.Request()
        request_for_client.a = request.a
        request_for_client.b = request.b

        self.get_logger().info('SumInts service call received')
        print("Calling add two ints client service call")
        result = self.call_add_two_ints(request_for_client)  # Call another service from here
        if result is not None:
            response.sum = result
            print("wow!!! it worked")
            return response
        else:
            return None

def main():
    rclpy.init()
    node = ClientServerNode()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    executor.spin() 
    rclpy.shutdown()

if __name__ == '__main__':
    main()
