#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int64.hpp"
#include "example_interfaces/srv/set_bool.hpp"

using std::placeholders::_1;
using std::placeholders::_2;


class numberCounterNode : public rclcpp::Node // MODIFY NAME
{
public:
    numberCounterNode() : Node("number_counter") // MODIFY NAME
    {
        number_count_publisher_ = this->create_publisher<example_interfaces::msg::Int64>("number_count", 10);
        RCLCPP_INFO(this->get_logger(), "Number Counter Publiisher has been started.");

        number_subscriber_ = this->create_subscription<example_interfaces::msg::Int64>(
            "number", 10,
            std::bind(&numberCounterNode::callbackNumberCounter, this, std::placeholders::_1));
        RCLCPP_INFO(this->get_logger(), "Number Counter Subscriber has been started.");

        server_ = this->create_service<example_interfaces::srv::SetBool>(
        "reset_number_count",
            std::bind(&numberCounterNode::callbackResetNumber, this, _1, _2));
        RCLCPP_INFO(this->get_logger(), "Service server has been started.");
    }

private:

    void callbackNumberCounter(const example_interfaces::msg::Int64::SharedPtr msg)
    {
        counter_ += int(msg->data);
        RCLCPP_INFO(this->get_logger(), "%d", counter_);
        auto msg_pub = example_interfaces::msg::Int64();
        msg_pub.data = counter_;
        number_count_publisher_->publish(msg_pub);

    }

    void callbackResetNumber(const example_interfaces::srv::SetBool::Request::SharedPtr request,
                            const example_interfaces::srv::SetBool::Response::SharedPtr response)
    {
        if(request->data == false)
        {
            counter_ = 0;
            RCLCPP_INFO(this->get_logger(), "Reset Count.");

        } else {
            RCLCPP_INFO(this->get_logger(), "No reset bitch");
        }
        response->success = true;
        response->message = "Nice job dude i love c++!";
    }

    int counter_ = 0;
    rclcpp::Subscription<example_interfaces::msg::Int64>::SharedPtr number_subscriber_;
    rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr number_count_publisher_;
    rclcpp::Service<example_interfaces::srv::SetBool>::SharedPtr server_;

};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<numberCounterNode>(); // MODIFY NAME
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
