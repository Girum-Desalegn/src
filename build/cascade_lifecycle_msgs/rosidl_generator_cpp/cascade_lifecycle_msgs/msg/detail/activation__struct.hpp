// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cascade_lifecycle_msgs:msg/Activation.idl
// generated code does not contain a copyright notice

#ifndef CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__ACTIVATION__STRUCT_HPP_
#define CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__ACTIVATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cascade_lifecycle_msgs__msg__Activation __attribute__((deprecated))
#else
# define DEPRECATED__cascade_lifecycle_msgs__msg__Activation __declspec(deprecated)
#endif

namespace cascade_lifecycle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Activation_
{
  using Type = Activation_<ContainerAllocator>;

  explicit Activation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operation_type = 0;
      this->activator = "";
      this->activation = "";
    }
  }

  explicit Activation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : activator(_alloc),
    activation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operation_type = 0;
      this->activator = "";
      this->activation = "";
    }
  }

  // field types and members
  using _operation_type_type =
    uint8_t;
  _operation_type_type operation_type;
  using _activator_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _activator_type activator;
  using _activation_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _activation_type activation;

  // setters for named parameter idiom
  Type & set__operation_type(
    const uint8_t & _arg)
  {
    this->operation_type = _arg;
    return *this;
  }
  Type & set__activator(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->activator = _arg;
    return *this;
  }
  Type & set__activation(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->activation = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ADD =
    0u;
  static constexpr uint8_t REMOVE =
    1u;

  // pointer types
  using RawPtr =
    cascade_lifecycle_msgs::msg::Activation_<ContainerAllocator> *;
  using ConstRawPtr =
    const cascade_lifecycle_msgs::msg::Activation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cascade_lifecycle_msgs::msg::Activation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cascade_lifecycle_msgs::msg::Activation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cascade_lifecycle_msgs::msg::Activation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cascade_lifecycle_msgs::msg::Activation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cascade_lifecycle_msgs::msg::Activation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cascade_lifecycle_msgs::msg::Activation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cascade_lifecycle_msgs::msg::Activation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cascade_lifecycle_msgs::msg::Activation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cascade_lifecycle_msgs__msg__Activation
    std::shared_ptr<cascade_lifecycle_msgs::msg::Activation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cascade_lifecycle_msgs__msg__Activation
    std::shared_ptr<cascade_lifecycle_msgs::msg::Activation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Activation_ & other) const
  {
    if (this->operation_type != other.operation_type) {
      return false;
    }
    if (this->activator != other.activator) {
      return false;
    }
    if (this->activation != other.activation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Activation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Activation_

// alias to use template instance with default allocator
using Activation =
  cascade_lifecycle_msgs::msg::Activation_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Activation_<ContainerAllocator>::ADD;
template<typename ContainerAllocator>
constexpr uint8_t Activation_<ContainerAllocator>::REMOVE;

}  // namespace msg

}  // namespace cascade_lifecycle_msgs

#endif  // CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__ACTIVATION__STRUCT_HPP_
