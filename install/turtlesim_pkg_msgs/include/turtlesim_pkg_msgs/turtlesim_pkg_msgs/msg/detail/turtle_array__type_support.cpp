// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from turtlesim_pkg_msgs:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "turtlesim_pkg_msgs/msg/detail/turtle_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtlesim_pkg_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TurtleArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtlesim_pkg_msgs::msg::TurtleArray(_init);
}

void TurtleArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtlesim_pkg_msgs::msg::TurtleArray *>(message_memory);
  typed_message->~TurtleArray();
}

size_t size_function__TurtleArray__turtle_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<turtlesim_pkg_msgs::msg::Turtle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TurtleArray__turtle_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<turtlesim_pkg_msgs::msg::Turtle> *>(untyped_member);
  return &member[index];
}

void * get_function__TurtleArray__turtle_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<turtlesim_pkg_msgs::msg::Turtle> *>(untyped_member);
  return &member[index];
}

void fetch_function__TurtleArray__turtle_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const turtlesim_pkg_msgs::msg::Turtle *>(
    get_const_function__TurtleArray__turtle_array(untyped_member, index));
  auto & value = *reinterpret_cast<turtlesim_pkg_msgs::msg::Turtle *>(untyped_value);
  value = item;
}

void assign_function__TurtleArray__turtle_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<turtlesim_pkg_msgs::msg::Turtle *>(
    get_function__TurtleArray__turtle_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const turtlesim_pkg_msgs::msg::Turtle *>(untyped_value);
  item = value;
}

void resize_function__TurtleArray__turtle_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<turtlesim_pkg_msgs::msg::Turtle> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TurtleArray_message_member_array[1] = {
  {
    "turtle_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<turtlesim_pkg_msgs::msg::Turtle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim_pkg_msgs::msg::TurtleArray, turtle_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__TurtleArray__turtle_array,  // size() function pointer
    get_const_function__TurtleArray__turtle_array,  // get_const(index) function pointer
    get_function__TurtleArray__turtle_array,  // get(index) function pointer
    fetch_function__TurtleArray__turtle_array,  // fetch(index, &value) function pointer
    assign_function__TurtleArray__turtle_array,  // assign(index, value) function pointer
    resize_function__TurtleArray__turtle_array  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TurtleArray_message_members = {
  "turtlesim_pkg_msgs::msg",  // message namespace
  "TurtleArray",  // message name
  1,  // number of fields
  sizeof(turtlesim_pkg_msgs::msg::TurtleArray),
  TurtleArray_message_member_array,  // message members
  TurtleArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TurtleArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TurtleArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace turtlesim_pkg_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim_pkg_msgs::msg::TurtleArray>()
{
  return &::turtlesim_pkg_msgs::msg::rosidl_typesupport_introspection_cpp::TurtleArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim_pkg_msgs, msg, TurtleArray)() {
  return &::turtlesim_pkg_msgs::msg::rosidl_typesupport_introspection_cpp::TurtleArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
