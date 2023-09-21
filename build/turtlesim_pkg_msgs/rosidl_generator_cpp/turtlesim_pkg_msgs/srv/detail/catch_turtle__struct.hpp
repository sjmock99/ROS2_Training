// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim_pkg_msgs:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_PKG_MSGS__SRV__DETAIL__CATCH_TURTLE__STRUCT_HPP_
#define TURTLESIM_PKG_MSGS__SRV__DETAIL__CATCH_TURTLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtlesim_pkg_msgs__srv__CatchTurtle_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_pkg_msgs__srv__CatchTurtle_Request __declspec(deprecated)
#endif

namespace turtlesim_pkg_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CatchTurtle_Request_
{
  using Type = CatchTurtle_Request_<ContainerAllocator>;

  explicit CatchTurtle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turtle_name = "";
    }
  }

  explicit CatchTurtle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : turtle_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turtle_name = "";
    }
  }

  // field types and members
  using _turtle_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _turtle_name_type turtle_name;

  // setters for named parameter idiom
  Type & set__turtle_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->turtle_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_pkg_msgs::srv::CatchTurtle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_pkg_msgs::srv::CatchTurtle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_pkg_msgs::srv::CatchTurtle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_pkg_msgs::srv::CatchTurtle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_pkg_msgs__srv__CatchTurtle_Request
    std::shared_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_pkg_msgs__srv__CatchTurtle_Request
    std::shared_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CatchTurtle_Request_ & other) const
  {
    if (this->turtle_name != other.turtle_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const CatchTurtle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CatchTurtle_Request_

// alias to use template instance with default allocator
using CatchTurtle_Request =
  turtlesim_pkg_msgs::srv::CatchTurtle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim_pkg_msgs


#ifndef _WIN32
# define DEPRECATED__turtlesim_pkg_msgs__srv__CatchTurtle_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_pkg_msgs__srv__CatchTurtle_Response __declspec(deprecated)
#endif

namespace turtlesim_pkg_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CatchTurtle_Response_
{
  using Type = CatchTurtle_Response_<ContainerAllocator>;

  explicit CatchTurtle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kill_result = false;
    }
  }

  explicit CatchTurtle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kill_result = false;
    }
  }

  // field types and members
  using _kill_result_type =
    bool;
  _kill_result_type kill_result;

  // setters for named parameter idiom
  Type & set__kill_result(
    const bool & _arg)
  {
    this->kill_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_pkg_msgs::srv::CatchTurtle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_pkg_msgs::srv::CatchTurtle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_pkg_msgs::srv::CatchTurtle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_pkg_msgs::srv::CatchTurtle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_pkg_msgs__srv__CatchTurtle_Response
    std::shared_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_pkg_msgs__srv__CatchTurtle_Response
    std::shared_ptr<turtlesim_pkg_msgs::srv::CatchTurtle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CatchTurtle_Response_ & other) const
  {
    if (this->kill_result != other.kill_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CatchTurtle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CatchTurtle_Response_

// alias to use template instance with default allocator
using CatchTurtle_Response =
  turtlesim_pkg_msgs::srv::CatchTurtle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtlesim_pkg_msgs

namespace turtlesim_pkg_msgs
{

namespace srv
{

struct CatchTurtle
{
  using Request = turtlesim_pkg_msgs::srv::CatchTurtle_Request;
  using Response = turtlesim_pkg_msgs::srv::CatchTurtle_Response;
};

}  // namespace srv

}  // namespace turtlesim_pkg_msgs

#endif  // TURTLESIM_PKG_MSGS__SRV__DETAIL__CATCH_TURTLE__STRUCT_HPP_
