// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_pkg_msgs:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PKG_MSGS__SRV__DETAIL__CATCH_TURTLE__STRUCT_H_
#define TURTLESIM_PKG_MSGS__SRV__DETAIL__CATCH_TURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtle_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CatchTurtle in the package turtlesim_pkg_msgs.
typedef struct turtlesim_pkg_msgs__srv__CatchTurtle_Request
{
  rosidl_runtime_c__String turtle_name;
} turtlesim_pkg_msgs__srv__CatchTurtle_Request;

// Struct for a sequence of turtlesim_pkg_msgs__srv__CatchTurtle_Request.
typedef struct turtlesim_pkg_msgs__srv__CatchTurtle_Request__Sequence
{
  turtlesim_pkg_msgs__srv__CatchTurtle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_pkg_msgs__srv__CatchTurtle_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CatchTurtle in the package turtlesim_pkg_msgs.
typedef struct turtlesim_pkg_msgs__srv__CatchTurtle_Response
{
  bool kill_result;
} turtlesim_pkg_msgs__srv__CatchTurtle_Response;

// Struct for a sequence of turtlesim_pkg_msgs__srv__CatchTurtle_Response.
typedef struct turtlesim_pkg_msgs__srv__CatchTurtle_Response__Sequence
{
  turtlesim_pkg_msgs__srv__CatchTurtle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_pkg_msgs__srv__CatchTurtle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_PKG_MSGS__SRV__DETAIL__CATCH_TURTLE__STRUCT_H_
