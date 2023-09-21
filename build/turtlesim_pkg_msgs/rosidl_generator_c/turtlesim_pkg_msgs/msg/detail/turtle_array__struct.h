// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_pkg_msgs:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
#define TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtle_array'
#include "turtlesim_pkg_msgs/msg/detail/turtle__struct.h"

/// Struct defined in msg/TurtleArray in the package turtlesim_pkg_msgs.
typedef struct turtlesim_pkg_msgs__msg__TurtleArray
{
  turtlesim_pkg_msgs__msg__Turtle__Sequence turtle_array;
} turtlesim_pkg_msgs__msg__TurtleArray;

// Struct for a sequence of turtlesim_pkg_msgs__msg__TurtleArray.
typedef struct turtlesim_pkg_msgs__msg__TurtleArray__Sequence
{
  turtlesim_pkg_msgs__msg__TurtleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_pkg_msgs__msg__TurtleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
