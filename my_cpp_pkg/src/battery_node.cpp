#include "rclcpp/rclcpp.hpp"
#include "my_robot_interfaces/srv/set_led.hpp"

class BatteryNode : public rclcpp::Node // MODIFY NAME
{
public:
    BatteryNode() : Node("battery_node") // MODIFY NAME
    {
        timer_ = this->create_wall_timer(std::chrono::seconds(1),
            std::bind(&BatteryNode::fakeEvolution, this));

    }

    void fakeEvolution()
    {
        // increase seconds parameter every second...
        this->seconds += 1;

        if (this->seconds == 4) {
            this->led = 3;
            this->state = "on";
            threads_.push_back(std::thread(std::bind(&BatteryNode::CallSetLed, this, this->led, this->state)));

        } else if (this->seconds == 10) {
            this->led = 0;
            this->state = "off";
            this->seconds = 0;
            threads_.push_back(std::thread(std::bind(&BatteryNode::CallSetLed, this, this->led, this->state)));
        }

        // RCLCPP_INFO(this->get_logger(), "%d", this->seconds);
        // RCLCPP_INFO(this->get_logger(), "LED: %d, State:  %s", this->led, this->state.c_str());

    }

    void CallSetLed(int ledNumber, const std::string& state)
    {
        auto client = this->create_client<my_robot_interfaces::srv::SetLed>("/set_led");

        while (!client->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_WARN(this->get_logger(), "Waiting for the server to be up...");
        }

        auto request = std::make_shared<my_robot_interfaces::srv::SetLed::Request>();
        request->led = ledNumber;
        request->state = state;

        auto future = client->async_send_request(request);


        try 
        {
            auto response = future.get();
            RCLCPP_INFO(this->get_logger(), "%d", static_cast<int>(response->success));
        }

        catch (const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "Service Call Failed");
        }


    }

private:
    // std::thread thread1_;
    std::vector<std::thread> threads_;
    rclcpp::TimerBase::SharedPtr timer_;
    int seconds = 0;
    int led = 0;
    std::string state = "on";

};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<BatteryNode>(); // MODIFY NAME
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
