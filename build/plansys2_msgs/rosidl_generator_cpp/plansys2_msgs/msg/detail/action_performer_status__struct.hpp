// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:msg/ActionPerformerStatus.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION_PERFORMER_STATUS__STRUCT_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION_PERFORMER_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__msg__ActionPerformerStatus __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__msg__ActionPerformerStatus __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionPerformerStatus_
{
  using Type = ActionPerformerStatus_<ContainerAllocator>;

  explicit ActionPerformerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->action = "";
      this->node_name = "";
    }
  }

  explicit ActionPerformerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_alloc),
    node_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->action = "";
      this->node_name = "";
    }
  }

  // field types and members
  using _state_type =
    int8_t;
  _state_type state;
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _action_type action;
  using _specialized_arguments_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _specialized_arguments_type specialized_arguments;
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _node_name_type node_name;

  // setters for named parameter idiom
  Type & set__state(
    const int8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__specialized_arguments(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->specialized_arguments = _arg;
    return *this;
  }
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t NOT_READY =
    0;
  static constexpr int8_t READY =
    1;
  static constexpr int8_t RUNNING =
    2;
  static constexpr int8_t FAILURE =
    4;

  // pointer types
  using RawPtr =
    plansys2_msgs::msg::ActionPerformerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::msg::ActionPerformerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::msg::ActionPerformerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::msg::ActionPerformerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::ActionPerformerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::ActionPerformerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::ActionPerformerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::ActionPerformerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::msg::ActionPerformerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::msg::ActionPerformerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__msg__ActionPerformerStatus
    std::shared_ptr<plansys2_msgs::msg::ActionPerformerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__msg__ActionPerformerStatus
    std::shared_ptr<plansys2_msgs::msg::ActionPerformerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionPerformerStatus_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->specialized_arguments != other.specialized_arguments) {
      return false;
    }
    if (this->node_name != other.node_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionPerformerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionPerformerStatus_

// alias to use template instance with default allocator
using ActionPerformerStatus =
  plansys2_msgs::msg::ActionPerformerStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t ActionPerformerStatus_<ContainerAllocator>::NOT_READY;
template<typename ContainerAllocator>
constexpr int8_t ActionPerformerStatus_<ContainerAllocator>::READY;
template<typename ContainerAllocator>
constexpr int8_t ActionPerformerStatus_<ContainerAllocator>::RUNNING;
template<typename ContainerAllocator>
constexpr int8_t ActionPerformerStatus_<ContainerAllocator>::FAILURE;

}  // namespace msg

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION_PERFORMER_STATUS__STRUCT_HPP_
