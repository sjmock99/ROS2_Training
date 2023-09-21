// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_pkg_msgs:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE__TRAITS_HPP_
#define TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_pkg_msgs/msg/detail/turtle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlesim_pkg_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Turtle & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtle_name
  {
    out << "turtle_name: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_name, out);
    out << ", ";
  }

  // member: x_pos
  {
    out << "x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pos, out);
    out << ", ";
  }

  // member: y_pos
  {
    out << "y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Turtle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turtle_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle_name: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_name, out);
    out << "\n";
  }

  // member: x_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pos, out);
    out << "\n";
  }

  // member: y_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pos, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Turtle & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace turtlesim_pkg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_pkg_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_pkg_msgs::msg::Turtle & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_pkg_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_pkg_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_pkg_msgs::msg::Turtle & msg)
{
  return turtlesim_pkg_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_pkg_msgs::msg::Turtle>()
{
  return "turtlesim_pkg_msgs::msg::Turtle";
}

template<>
inline const char * name<turtlesim_pkg_msgs::msg::Turtle>()
{
  return "turtlesim_pkg_msgs/msg/Turtle";
}

template<>
struct has_fixed_size<turtlesim_pkg_msgs::msg::Turtle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim_pkg_msgs::msg::Turtle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim_pkg_msgs::msg::Turtle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE__TRAITS_HPP_
