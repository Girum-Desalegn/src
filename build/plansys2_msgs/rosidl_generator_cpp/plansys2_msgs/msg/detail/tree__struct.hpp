// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:msg/Tree.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__TREE__STRUCT_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__TREE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'nodes'
#include "plansys2_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__msg__Tree __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__msg__Tree __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tree_
{
  using Type = Tree_<ContainerAllocator>;

  explicit Tree_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Tree_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _nodes_type =
    std::vector<plansys2_msgs::msg::Node_<ContainerAllocator>, typename ContainerAllocator::template rebind<plansys2_msgs::msg::Node_<ContainerAllocator>>::other>;
  _nodes_type nodes;

  // setters for named parameter idiom
  Type & set__nodes(
    const std::vector<plansys2_msgs::msg::Node_<ContainerAllocator>, typename ContainerAllocator::template rebind<plansys2_msgs::msg::Node_<ContainerAllocator>>::other> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::msg::Tree_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::msg::Tree_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::msg::Tree_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::msg::Tree_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::Tree_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::Tree_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::Tree_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::Tree_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::msg::Tree_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::msg::Tree_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__msg__Tree
    std::shared_ptr<plansys2_msgs::msg::Tree_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__msg__Tree
    std::shared_ptr<plansys2_msgs::msg::Tree_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tree_ & other) const
  {
    if (this->nodes != other.nodes) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tree_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tree_

// alias to use template instance with default allocator
using Tree =
  plansys2_msgs::msg::Tree_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__TREE__STRUCT_HPP_
