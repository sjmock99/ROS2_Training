// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim_pkg_msgs:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE_ARRAY__STRUCT_HPP_
#define TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'turtle_array'
#include "turtlesim_pkg_msgs/msg/detail/turtle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim_pkg_msgs__msg__TurtleArray __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_pkg_msgs__msg__TurtleArray __declspec(deprecated)
#endif

namespace turtlesim_pkg_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurtleArray_
{
  using Type = TurtleArray_<ContainerAllocator>;

  explicit TurtleArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TurtleArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _turtle_array_type =
    std::vector<turtlesim_pkg_msgs::msg::Turtle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<turtlesim_pkg_msgs::msg::Turtle_<ContainerAllocator>>>;
  _turtle_array_type turtle_array;

  // setters for named parameter idiom
  Type & set__turtle_array(
    const std::vector<turtlesim_pkg_msgs::msg::Turtle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<turtlesim_pkg_msgs::msg::Turtle_<ContainerAllocator>>> & _arg)
  {
    this->turtle_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_pkg_msgs::msg::TurtleArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_pkg_msgs::msg::TurtleArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_pkg_msgs::msg::TurtleArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_pkg_msgs::msg::TurtleArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_pkg_msgs::msg::TurtleArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_pkg_msgs::msg::TurtleArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_pkg_msgs::msg::TurtleArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_pkg_msgs::msg::TurtleArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_pkg_msgs::msg::TurtleArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_pkg_msgs::msg::TurtleArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_pkg_msgs__msg__TurtleArray
    std::shared_ptr<turtlesim_pkg_msgs::msg::TurtleArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_pkg_msgs__msg__TurtleArray
    std::shared_ptr<turtlesim_pkg_msgs::msg::TurtleArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleArray_ & other) const
  {
    if (this->turtle_array != other.turtle_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleArray_

// alias to use template instance with default allocator
using TurtleArray =
  turtlesim_pkg_msgs::msg::TurtleArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtlesim_pkg_msgs

#endif  // TURTLESIM_PKG_MSGS__MSG__DETAIL__TURTLE_ARRAY__STRUCT_HPP_
