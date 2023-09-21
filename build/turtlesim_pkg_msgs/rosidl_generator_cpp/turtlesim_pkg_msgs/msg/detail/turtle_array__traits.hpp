// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_pkg_msgs:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_
#define TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_pkg_msgs/msg/detail/turtle_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'turtle_array'
#include "turtlesim_pkg_msgs/msg/detail/turtle__traits.hpp"

namespace turtlesim_pkg_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TurtleArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtle_array
  {
    if (msg.turtle_array.size() == 0) {
      out << "turtle_array: []";
    } else {
      out << "turtle_array: [";
      size_t pending_items = msg.turtle_array.size();
      for (auto item : msg.turtle_array) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turtle_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.turtle_array.size() == 0) {
      out << "turtle_array: []\n";
    } else {
      out << "turtle_array:\n";
      for (auto item : msg.turtle_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleArray & msg, bool use_flow_style = false)
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
  const turtlesim_pkg_msgs::msg::TurtleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_pkg_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_pkg_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_pkg_msgs::msg::TurtleArray & msg)
{
  return turtlesim_pkg_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_pkg_msgs::msg::TurtleArray>()
{
  return "turtlesim_pkg_msgs::msg::TurtleArray";
}

template<>
inline const char * name<turtlesim_pkg_msgs::msg::TurtleArray>()
{
  return "turtlesim_pkg_msgs/msg/TurtleArray";
}

template<>
struct has_fixed_size<turtlesim_pkg_msgs::msg::TurtleArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim_pkg_msgs::msg::TurtleArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim_pkg_msgs::msg::TurtleArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_
