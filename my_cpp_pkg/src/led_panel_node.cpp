#include "rclcpp/rclcpp.hpp"
#include "my_robot_interfaces/srv/set_led.hpp"
#include "my_robot_interfaces/msg/led_panel_state.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class LedPanelNode : public rclcpp::Node
{
public:
    LedPanelNode() : Node("led_panel_node")
    {
        server_ = this->create_service<my_robot_interfaces::srv::SetLed>(
            "/set_led",
            std::bind(&LedPanelNode::callbackSetLed, this, _1, _2));
        RCLCPP_INFO(this->get_logger(), "Service server has been started.");
        pub_ = this->create_publisher<my_robot_interfaces::msg::LedPanelState>(
        "led_panel_state", 10);
    }

private:
    void callbackSetLed(const my_robot_interfaces::srv::SetLed::Request::SharedPtr request,
                            const my_robot_interfaces::srv::SetLed::Response::SharedPtr response)
    {
        response->success = true;
        auto msg = my_robot_interfaces::msg::LedPanelState();
        msg.led = request->led;
        msg.state = request->state;
        pub_->publish(msg);

        RCLCPP_INFO(this->get_logger(), "%d, %s", static_cast<int>(request->led), request->state.c_str());
    }

    rclcpp::Service<my_robot_interfaces::srv::SetLed>::SharedPtr server_;
    rclcpp::Publisher<my_robot_interfaces::msg::LedPanelState>::SharedPtr pub_;

};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<LedPanelNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
