// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from turtlesim_pkg_msgs:msg/TurtleArray.idl
// generated code does not contain a copyright notice
#include "turtlesim_pkg_msgs/msg/detail/turtle_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "turtlesim_pkg_msgs/msg/detail/turtle_array__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace turtlesim_pkg_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const turtlesim_pkg_msgs::msg::Turtle &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  turtlesim_pkg_msgs::msg::Turtle &);
size_t get_serialized_size(
  const turtlesim_pkg_msgs::msg::Turtle &,
  size_t current_alignment);
size_t
max_serialized_size_Turtle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace turtlesim_pkg_msgs


namespace turtlesim_pkg_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtlesim_pkg_msgs
cdr_serialize(
  const turtlesim_pkg_msgs::msg::TurtleArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: turtle_array
  {
    size_t size = ros_message.turtle_array.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      turtlesim_pkg_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.turtle_array[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtlesim_pkg_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  turtlesim_pkg_msgs::msg::TurtleArray & ros_message)
{
  // Member: turtle_array
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.turtle_array.resize(size);
    for (size_t i = 0; i < size; i++) {
      turtlesim_pkg_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.turtle_array[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtlesim_pkg_msgs
get_serialized_size(
  const turtlesim_pkg_msgs::msg::TurtleArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: turtle_array
  {
    size_t array_size = ros_message.turtle_array.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        turtlesim_pkg_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.turtle_array[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtlesim_pkg_msgs
max_serialized_size_TurtleArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: turtle_array
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        turtlesim_pkg_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Turtle(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TurtleArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const turtlesim_pkg_msgs::msg::TurtleArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TurtleArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlesim_pkg_msgs::msg::TurtleArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TurtleArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlesim_pkg_msgs::msg::TurtleArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TurtleArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TurtleArray(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TurtleArray__callbacks = {
  "turtlesim_pkg_msgs::msg",
  "TurtleArray",
  _TurtleArray__cdr_serialize,
  _TurtleArray__cdr_deserialize,
  _TurtleArray__get_serialized_size,
  _TurtleArray__max_serialized_size
};

static rosidl_message_type_support_t _TurtleArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TurtleArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace turtlesim_pkg_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_turtlesim_pkg_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim_pkg_msgs::msg::TurtleArray>()
{
  return &turtlesim_pkg_msgs::msg::typesupport_fastrtps_cpp::_TurtleArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim_pkg_msgs, msg, TurtleArray)() {
  return &turtlesim_pkg_msgs::msg::typesupport_fastrtps_cpp::_TurtleArray__handle;
}

#ifdef __cplusplus
}
#endif
