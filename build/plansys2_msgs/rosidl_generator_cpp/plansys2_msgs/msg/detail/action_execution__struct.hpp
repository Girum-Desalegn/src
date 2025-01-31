// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:msg/ActionExecution.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION__STRUCT_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__msg__ActionExecution __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__msg__ActionExecution __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionExecution_
{
  using Type = ActionExecution_<ContainerAllocator>;

  explicit ActionExecution_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->node_id = "";
      this->action = "";
      this->success = false;
      this->completion = 0.0f;
      this->status = "";
    }
  }

  explicit ActionExecution_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_id(_alloc),
    action(_alloc),
    status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->node_id = "";
      this->action = "";
      this->success = false;
      this->completion = 0.0f;
      this->status = "";
    }
  }

  // field types and members
  using _type_type =
    int16_t;
  _type_type type;
  using _node_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _node_id_type node_id;
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _action_type action;
  using _arguments_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _arguments_type arguments;
  using _success_type =
    bool;
  _success_type success;
  using _completion_type =
    float;
  _completion_type completion;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__type(
    const int16_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__node_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->node_id = _arg;
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
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__completion(
    const float & _arg)
  {
    this->completion = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t REQUEST =
    1;
  static constexpr int16_t RESPONSE =
    2;
  static constexpr int16_t CONFIRM =
    3;
  static constexpr int16_t REJECT =
    4;
  static constexpr int16_t FEEDBACK =
    5;
  static constexpr int16_t FINISH =
    6;
  static constexpr int16_t CANCEL =
    7;

  // pointer types
  using RawPtr =
    plansys2_msgs::msg::ActionExecution_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::msg::ActionExecution_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::msg::ActionExecution_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::msg::ActionExecution_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::ActionExecution_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::ActionExecution_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::ActionExecution_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::ActionExecution_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::msg::ActionExecution_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::msg::ActionExecution_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__msg__ActionExecution
    std::shared_ptr<plansys2_msgs::msg::ActionExecution_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__msg__ActionExecution
    std::shared_ptr<plansys2_msgs::msg::ActionExecution_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionExecution_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->arguments != other.arguments) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->completion != other.completion) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionExecution_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionExecution_

// alias to use template instance with default allocator
using ActionExecution =
  plansys2_msgs::msg::ActionExecution_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int16_t ActionExecution_<ContainerAllocator>::REQUEST;
template<typename ContainerAllocator>
constexpr int16_t ActionExecution_<ContainerAllocator>::RESPONSE;
template<typename ContainerAllocator>
constexpr int16_t ActionExecution_<ContainerAllocator>::CONFIRM;
template<typename ContainerAllocator>
constexpr int16_t ActionExecution_<ContainerAllocator>::REJECT;
template<typename ContainerAllocator>
constexpr int16_t ActionExecution_<ContainerAllocator>::FEEDBACK;
template<typename ContainerAllocator>
constexpr int16_t ActionExecution_<ContainerAllocator>::FINISH;
template<typename ContainerAllocator>
constexpr int16_t ActionExecution_<ContainerAllocator>::CANCEL;

}  // namespace msg

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION__STRUCT_HPP_
