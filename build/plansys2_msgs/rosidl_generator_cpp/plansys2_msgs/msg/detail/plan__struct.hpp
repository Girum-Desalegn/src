// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:msg/Plan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__PLAN__STRUCT_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__PLAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'items'
#include "plansys2_msgs/msg/detail/plan_item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__msg__Plan __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__msg__Plan __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Plan_
{
  using Type = Plan_<ContainerAllocator>;

  explicit Plan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Plan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _items_type =
    std::vector<plansys2_msgs::msg::PlanItem_<ContainerAllocator>, typename ContainerAllocator::template rebind<plansys2_msgs::msg::PlanItem_<ContainerAllocator>>::other>;
  _items_type items;

  // setters for named parameter idiom
  Type & set__items(
    const std::vector<plansys2_msgs::msg::PlanItem_<ContainerAllocator>, typename ContainerAllocator::template rebind<plansys2_msgs::msg::PlanItem_<ContainerAllocator>>::other> & _arg)
  {
    this->items = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::msg::Plan_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::msg::Plan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::msg::Plan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::msg::Plan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::Plan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::Plan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::Plan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::Plan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::msg::Plan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::msg::Plan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__msg__Plan
    std::shared_ptr<plansys2_msgs::msg::Plan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__msg__Plan
    std::shared_ptr<plansys2_msgs::msg::Plan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Plan_ & other) const
  {
    if (this->items != other.items) {
      return false;
    }
    return true;
  }
  bool operator!=(const Plan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Plan_

// alias to use template instance with default allocator
using Plan =
  plansys2_msgs::msg::Plan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__PLAN__STRUCT_HPP_
