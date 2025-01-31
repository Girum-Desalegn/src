// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cascade_lifecycle_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_
#define CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cascade_lifecycle_msgs__msg__State __attribute__((deprecated))
#else
# define DEPRECATED__cascade_lifecycle_msgs__msg__State __declspec(deprecated)
#endif

namespace cascade_lifecycle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct State_
{
  using Type = State_<ContainerAllocator>;

  explicit State_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->node_name = "";
    }
  }

  explicit State_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->node_name = "";
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _node_name_type node_name;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cascade_lifecycle_msgs::msg::State_<ContainerAllocator> *;
  using ConstRawPtr =
    const cascade_lifecycle_msgs::msg::State_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cascade_lifecycle_msgs::msg::State_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cascade_lifecycle_msgs::msg::State_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cascade_lifecycle_msgs::msg::State_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cascade_lifecycle_msgs::msg::State_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cascade_lifecycle_msgs::msg::State_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cascade_lifecycle_msgs::msg::State_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cascade_lifecycle_msgs::msg::State_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cascade_lifecycle_msgs::msg::State_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cascade_lifecycle_msgs__msg__State
    std::shared_ptr<cascade_lifecycle_msgs::msg::State_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cascade_lifecycle_msgs__msg__State
    std::shared_ptr<cascade_lifecycle_msgs::msg::State_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->node_name != other.node_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_

// alias to use template instance with default allocator
using State =
  cascade_lifecycle_msgs::msg::State_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cascade_lifecycle_msgs

#endif  // CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_
