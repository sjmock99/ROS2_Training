// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_pkg_msgs:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE__BUILDER_HPP_
#define TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_pkg_msgs/msg/detail/turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_pkg_msgs
{

namespace msg
{

namespace builder
{

class Init_Turtle_y_pos
{
public:
  explicit Init_Turtle_y_pos(::turtlesim_pkg_msgs::msg::Turtle & msg)
  : msg_(msg)
  {}
  ::turtlesim_pkg_msgs::msg::Turtle y_pos(::turtlesim_pkg_msgs::msg::Turtle::_y_pos_type arg)
  {
    msg_.y_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_pkg_msgs::msg::Turtle msg_;
};

class Init_Turtle_x_pos
{
public:
  explicit Init_Turtle_x_pos(::turtlesim_pkg_msgs::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_y_pos x_pos(::turtlesim_pkg_msgs::msg::Turtle::_x_pos_type arg)
  {
    msg_.x_pos = std::move(arg);
    return Init_Turtle_y_pos(msg_);
  }

private:
  ::turtlesim_pkg_msgs::msg::Turtle msg_;
};

class Init_Turtle_turtle_name
{
public:
  Init_Turtle_turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turtle_x_pos turtle_name(::turtlesim_pkg_msgs::msg::Turtle::_turtle_name_type arg)
  {
    msg_.turtle_name = std::move(arg);
    return Init_Turtle_x_pos(msg_);
  }

private:
  ::turtlesim_pkg_msgs::msg::Turtle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_pkg_msgs::msg::Turtle>()
{
  return turtlesim_pkg_msgs::msg::builder::Init_Turtle_turtle_name();
}

}  // namespace turtlesim_pkg_msgs

#endif  // TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE__BUILDER_HPP_
