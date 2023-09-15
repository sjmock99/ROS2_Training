#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/set_bool.hpp"

class numberResetNode : public rclcpp::Node 
{
public:
    numberResetNode() : Node("number_reset") 
    {
        thread1_ = std::thread(std::bind(&numberResetNode::callNumberReset, this, false));

    }

    void callNumberReset(bool msg_bool)
    {
        auto client = this->create_client<example_interfaces::srv::SetBool>("reset_number_count");

        while (!client->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_WARN(this->get_logger(), "Waiting for the server to be up...");
        }

        auto request = std::make_shared<example_interfaces::srv::SetBool::Request>();
        request->data = msg_bool;

        auto future = client->async_send_request(request);

        try 
        {
            auto response = future.get();
        
            // RCLCPP_INFO(this->get_logger(), "%d", (int)response->success);
            // RCLCPP_INFO(this->get_logger(), "%s", ((std::string)response->message).c_str());

            RCLCPP_INFO(this->get_logger(), "%d", response->success);
            RCLCPP_INFO(this->get_logger(), "%s", (response->message).c_str());

        }

        catch (const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "Service Call Failed");
        }


    }

private:
    std::thread thread1_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<numberResetNode>(); 
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
