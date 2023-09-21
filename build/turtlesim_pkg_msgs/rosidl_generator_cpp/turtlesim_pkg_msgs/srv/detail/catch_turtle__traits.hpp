// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_pkg_msgs:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PKG_MSGS__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_
#define TURTLESIM_PKG_MSGS__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_pkg_msgs/srv/detail/catch_turtle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlesim_pkg_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CatchTurtle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtle_name
  {
    out << "turtle_name: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CatchTurtle_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CatchTurtle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtlesim_pkg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_pkg_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_pkg_msgs::srv::CatchTurtle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_pkg_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_pkg_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_pkg_msgs::srv::CatchTurtle_Request & msg)
{
  return turtlesim_pkg_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_pkg_msgs::srv::CatchTurtle_Request>()
{
  return "turtlesim_pkg_msgs::srv::CatchTurtle_Request";
}

template<>
inline const char * name<turtlesim_pkg_msgs::srv::CatchTurtle_Request>()
{
  return "turtlesim_pkg_msgs/srv/CatchTurtle_Request";
}

template<>
struct has_fixed_size<turtlesim_pkg_msgs::srv::CatchTurtle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim_pkg_msgs::srv::CatchTurtle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim_pkg_msgs::srv::CatchTurtle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtlesim_pkg_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CatchTurtle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: kill_result
  {
    out << "kill_result: ";
    rosidl_generator_traits::value_to_yaml(msg.kill_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CatchTurtle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kill_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kill_result: ";
    rosidl_generator_traits::value_to_yaml(msg.kill_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CatchTurtle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtlesim_pkg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_pkg_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_pkg_msgs::srv::CatchTurtle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_pkg_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_pkg_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_pkg_msgs::srv::CatchTurtle_Response & msg)
{
  return turtlesim_pkg_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_pkg_msgs::srv::CatchTurtle_Response>()
{
  return "turtlesim_pkg_msgs::srv::CatchTurtle_Response";
}

template<>
inline const char * name<turtlesim_pkg_msgs::srv::CatchTurtle_Response>()
{
  return "turtlesim_pkg_msgs/srv/CatchTurtle_Response";
}

template<>
struct has_fixed_size<turtlesim_pkg_msgs::srv::CatchTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_pkg_msgs::srv::CatchTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_pkg_msgs::srv::CatchTurtle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_pkg_msgs::srv::CatchTurtle>()
{
  return "turtlesim_pkg_msgs::srv::CatchTurtle";
}

template<>
inline const char * name<turtlesim_pkg_msgs::srv::CatchTurtle>()
{
  return "turtlesim_pkg_msgs/srv/CatchTurtle";
}

template<>
struct has_fixed_size<turtlesim_pkg_msgs::srv::CatchTurtle>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim_pkg_msgs::srv::CatchTurtle_Request>::value &&
    has_fixed_size<turtlesim_pkg_msgs::srv::CatchTurtle_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim_pkg_msgs::srv::CatchTurtle>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim_pkg_msgs::srv::CatchTurtle_Request>::value &&
    has_bounded_size<turtlesim_pkg_msgs::srv::CatchTurtle_Response>::value
  >
{
};

template<>
struct is_service<turtlesim_pkg_msgs::srv::CatchTurtle>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim_pkg_msgs::srv::CatchTurtle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim_pkg_msgs::srv::CatchTurtle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_PKG_MSGS__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_
