// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_pkg_msgs:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
#define TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_pkg_msgs/msg/detail/turtle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_pkg_msgs
{

namespace msg
{

namespace builder
{

class Init_TurtleArray_turtle_array
{
public:
  Init_TurtleArray_turtle_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_pkg_msgs::msg::TurtleArray turtle_array(::turtlesim_pkg_msgs::msg::TurtleArray::_turtle_array_type arg)
  {
    msg_.turtle_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_pkg_msgs::msg::TurtleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_pkg_msgs::msg::TurtleArray>()
{
  return turtlesim_pkg_msgs::msg::builder::Init_TurtleArray_turtle_array();
}

}  // namespace turtlesim_pkg_msgs

#endif  // TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
