// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION__STRUCT_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'parameters'
#include "plansys2_msgs/msg/detail/param__struct.hpp"
// Member 'preconditions'
// Member 'effects'
#include "plansys2_msgs/msg/detail/tree__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__msg__Action __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__msg__Action __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Action_
{
  using Type = Action_<ContainerAllocator>;

  explicit Action_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : preconditions(_init),
    effects(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Action_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    preconditions(_alloc, _init),
    effects(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _parameters_type =
    std::vector<plansys2_msgs::msg::Param_<ContainerAllocator>, typename ContainerAllocator::template rebind<plansys2_msgs::msg::Param_<ContainerAllocator>>::other>;
  _parameters_type parameters;
  using _preconditions_type =
    plansys2_msgs::msg::Tree_<ContainerAllocator>;
  _preconditions_type preconditions;
  using _effects_type =
    plansys2_msgs::msg::Tree_<ContainerAllocator>;
  _effects_type effects;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__parameters(
    const std::vector<plansys2_msgs::msg::Param_<ContainerAllocator>, typename ContainerAllocator::template rebind<plansys2_msgs::msg::Param_<ContainerAllocator>>::other> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }
  Type & set__preconditions(
    const plansys2_msgs::msg::Tree_<ContainerAllocator> & _arg)
  {
    this->preconditions = _arg;
    return *this;
  }
  Type & set__effects(
    const plansys2_msgs::msg::Tree_<ContainerAllocator> & _arg)
  {
    this->effects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::msg::Action_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::msg::Action_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::msg::Action_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::msg::Action_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::Action_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::Action_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::Action_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::Action_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::msg::Action_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::msg::Action_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__msg__Action
    std::shared_ptr<plansys2_msgs::msg::Action_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__msg__Action
    std::shared_ptr<plansys2_msgs::msg::Action_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Action_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    if (this->preconditions != other.preconditions) {
      return false;
    }
    if (this->effects != other.effects) {
      return false;
    }
    return true;
  }
  bool operator!=(const Action_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Action_

// alias to use template instance with default allocator
using Action =
  plansys2_msgs::msg::Action_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION__STRUCT_HPP_
