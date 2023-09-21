// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_pkg_msgs:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PKG_MSGS__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
#define TURTLESIM_PKG_MSGS__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_pkg_msgs/srv/detail/catch_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_pkg_msgs
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Request_turtle_name
{
public:
  Init_CatchTurtle_Request_turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_pkg_msgs::srv::CatchTurtle_Request turtle_name(::turtlesim_pkg_msgs::srv::CatchTurtle_Request::_turtle_name_type arg)
  {
    msg_.turtle_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_pkg_msgs::srv::CatchTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_pkg_msgs::srv::CatchTurtle_Request>()
{
  return turtlesim_pkg_msgs::srv::builder::Init_CatchTurtle_Request_turtle_name();
}

}  // namespace turtlesim_pkg_msgs


namespace turtlesim_pkg_msgs
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Response_kill_result
{
public:
  Init_CatchTurtle_Response_kill_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_pkg_msgs::srv::CatchTurtle_Response kill_result(::turtlesim_pkg_msgs::srv::CatchTurtle_Response::_kill_result_type arg)
  {
    msg_.kill_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_pkg_msgs::srv::CatchTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_pkg_msgs::srv::CatchTurtle_Response>()
{
  return turtlesim_pkg_msgs::srv::builder::Init_CatchTurtle_Response_kill_result();
}

}  // namespace turtlesim_pkg_msgs

#endif  // TURTLESIM_PKG_MSGS__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
