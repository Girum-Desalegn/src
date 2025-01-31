// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:msg/PlanItem.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__PLAN_ITEM__STRUCT_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__PLAN_ITEM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__msg__PlanItem __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__msg__PlanItem __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanItem_
{
  using Type = PlanItem_<ContainerAllocator>;

  explicit PlanItem_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0f;
      this->action = "";
      this->duration = 0.0f;
    }
  }

  explicit PlanItem_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0f;
      this->action = "";
      this->duration = 0.0f;
    }
  }

  // field types and members
  using _time_type =
    float;
  _time_type time;
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _action_type action;
  using _duration_type =
    float;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__time(
    const float & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__duration(
    const float & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::msg::PlanItem_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::msg::PlanItem_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::msg::PlanItem_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::msg::PlanItem_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::PlanItem_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::PlanItem_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::PlanItem_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::PlanItem_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::msg::PlanItem_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::msg::PlanItem_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__msg__PlanItem
    std::shared_ptr<plansys2_msgs::msg::PlanItem_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__msg__PlanItem
    std::shared_ptr<plansys2_msgs::msg::PlanItem_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanItem_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanItem_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanItem_

// alias to use template instance with default allocator
using PlanItem =
  plansys2_msgs::msg::PlanItem_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__PLAN_ITEM__STRUCT_HPP_
