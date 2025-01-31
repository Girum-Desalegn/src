// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:msg/ActionExecutionInfo.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__STRUCT_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'start_stamp'
// Member 'status_stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__msg__ActionExecutionInfo __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__msg__ActionExecutionInfo __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionExecutionInfo_
{
  using Type = ActionExecutionInfo_<ContainerAllocator>;

  explicit ActionExecutionInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_stamp(_init),
    status_stamp(_init),
    duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->action_full_name = "";
      this->action = "";
      this->completion = 0.0f;
      this->message_status = "";
    }
  }

  explicit ActionExecutionInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_stamp(_alloc, _init),
    status_stamp(_alloc, _init),
    action_full_name(_alloc),
    action(_alloc),
    duration(_alloc, _init),
    message_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->action_full_name = "";
      this->action = "";
      this->completion = 0.0f;
      this->message_status = "";
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _start_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_stamp_type start_stamp;
  using _status_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _status_stamp_type status_stamp;
  using _action_full_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _action_full_name_type action_full_name;
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _action_type action;
  using _arguments_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _arguments_type arguments;
  using _duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_type duration;
  using _completion_type =
    float;
  _completion_type completion;
  using _message_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_status_type message_status;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__start_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->start_stamp = _arg;
    return *this;
  }
  Type & set__status_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->status_stamp = _arg;
    return *this;
  }
  Type & set__action_full_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->action_full_name = _arg;
    return *this;
  }
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__arguments(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->arguments = _arg;
    return *this;
  }
  Type & set__duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__completion(
    const float & _arg)
  {
    this->completion = _arg;
    return *this;
  }
  Type & set__message_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t NOT_EXECUTED =
    1;
  static constexpr int8_t EXECUTING =
    2;
  static constexpr int8_t FAILED =
    3;
  static constexpr int8_t SUCCEEDED =
    4;
  static constexpr int8_t CANCELLED =
    5;

  // pointer types
  using RawPtr =
    plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__msg__ActionExecutionInfo
    std::shared_ptr<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__msg__ActionExecutionInfo
    std::shared_ptr<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionExecutionInfo_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->start_stamp != other.start_stamp) {
      return false;
    }
    if (this->status_stamp != other.status_stamp) {
      return false;
    }
    if (this->action_full_name != other.action_full_name) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->arguments != other.arguments) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->completion != other.completion) {
      return false;
    }
    if (this->message_status != other.message_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionExecutionInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionExecutionInfo_

// alias to use template instance with default allocator
using ActionExecutionInfo =
  plansys2_msgs::msg::ActionExecutionInfo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t ActionExecutionInfo_<ContainerAllocator>::NOT_EXECUTED;
template<typename ContainerAllocator>
constexpr int8_t ActionExecutionInfo_<ContainerAllocator>::EXECUTING;
template<typename ContainerAllocator>
constexpr int8_t ActionExecutionInfo_<ContainerAllocator>::FAILED;
template<typename ContainerAllocator>
constexpr int8_t ActionExecutionInfo_<ContainerAllocator>::SUCCEEDED;
template<typename ContainerAllocator>
constexpr int8_t ActionExecutionInfo_<ContainerAllocator>::CANCELLED;

}  // namespace msg

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__STRUCT_HPP_
