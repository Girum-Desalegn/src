// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:msg/DurativeAction.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__DURATIVE_ACTION__STRUCT_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__DURATIVE_ACTION__STRUCT_HPP_

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
// Member 'at_start_requirements'
// Member 'over_all_requirements'
// Member 'at_end_requirements'
// Member 'at_start_effects'
// Member 'at_end_effects'
#include "plansys2_msgs/msg/detail/tree__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__msg__DurativeAction __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__msg__DurativeAction __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DurativeAction_
{
  using Type = DurativeAction_<ContainerAllocator>;

  explicit DurativeAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : at_start_requirements(_init),
    over_all_requirements(_init),
    at_end_requirements(_init),
    at_start_effects(_init),
    at_end_effects(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit DurativeAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    at_start_requirements(_alloc, _init),
    over_all_requirements(_alloc, _init),
    at_end_requirements(_alloc, _init),
    at_start_effects(_alloc, _init),
    at_end_effects(_alloc, _init)
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
  using _at_start_requirements_type =
    plansys2_msgs::msg::Tree_<ContainerAllocator>;
  _at_start_requirements_type at_start_requirements;
  using _over_all_requirements_type =
    plansys2_msgs::msg::Tree_<ContainerAllocator>;
  _over_all_requirements_type over_all_requirements;
  using _at_end_requirements_type =
    plansys2_msgs::msg::Tree_<ContainerAllocator>;
  _at_end_requirements_type at_end_requirements;
  using _at_start_effects_type =
    plansys2_msgs::msg::Tree_<ContainerAllocator>;
  _at_start_effects_type at_start_effects;
  using _at_end_effects_type =
    plansys2_msgs::msg::Tree_<ContainerAllocator>;
  _at_end_effects_type at_end_effects;

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
  Type & set__at_start_requirements(
    const plansys2_msgs::msg::Tree_<ContainerAllocator> & _arg)
  {
    this->at_start_requirements = _arg;
    return *this;
  }
  Type & set__over_all_requirements(
    const plansys2_msgs::msg::Tree_<ContainerAllocator> & _arg)
  {
    this->over_all_requirements = _arg;
    return *this;
  }
  Type & set__at_end_requirements(
    const plansys2_msgs::msg::Tree_<ContainerAllocator> & _arg)
  {
    this->at_end_requirements = _arg;
    return *this;
  }
  Type & set__at_start_effects(
    const plansys2_msgs::msg::Tree_<ContainerAllocator> & _arg)
  {
    this->at_start_effects = _arg;
    return *this;
  }
  Type & set__at_end_effects(
    const plansys2_msgs::msg::Tree_<ContainerAllocator> & _arg)
  {
    this->at_end_effects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::msg::DurativeAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::msg::DurativeAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::msg::DurativeAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::msg::DurativeAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::DurativeAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::DurativeAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::DurativeAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::DurativeAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::msg::DurativeAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::msg::DurativeAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__msg__DurativeAction
    std::shared_ptr<plansys2_msgs::msg::DurativeAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__msg__DurativeAction
    std::shared_ptr<plansys2_msgs::msg::DurativeAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DurativeAction_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    if (this->at_start_requirements != other.at_start_requirements) {
      return false;
    }
    if (this->over_all_requirements != other.over_all_requirements) {
      return false;
    }
    if (this->at_end_requirements != other.at_end_requirements) {
      return false;
    }
    if (this->at_start_effects != other.at_start_effects) {
      return false;
    }
    if (this->at_end_effects != other.at_end_effects) {
      return false;
    }
    return true;
  }
  bool operator!=(const DurativeAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DurativeAction_

// alias to use template instance with default allocator
using DurativeAction =
  plansys2_msgs::msg::DurativeAction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__DURATIVE_ACTION__STRUCT_HPP_
