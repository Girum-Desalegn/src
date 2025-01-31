// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:msg/Knowledge.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__STRUCT_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__msg__Knowledge __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__msg__Knowledge __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Knowledge_
{
  using Type = Knowledge_<ContainerAllocator>;

  explicit Knowledge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal = "";
    }
  }

  explicit Knowledge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal = "";
    }
  }

  // field types and members
  using _instances_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _instances_type instances;
  using _predicates_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _predicates_type predicates;
  using _functions_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _functions_type functions;
  using _goal_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__instances(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->instances = _arg;
    return *this;
  }
  Type & set__predicates(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->predicates = _arg;
    return *this;
  }
  Type & set__functions(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->functions = _arg;
    return *this;
  }
  Type & set__goal(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::msg::Knowledge_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::msg::Knowledge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::msg::Knowledge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::msg::Knowledge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::Knowledge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::Knowledge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::Knowledge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::Knowledge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::msg::Knowledge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::msg::Knowledge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__msg__Knowledge
    std::shared_ptr<plansys2_msgs::msg::Knowledge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__msg__Knowledge
    std::shared_ptr<plansys2_msgs::msg::Knowledge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Knowledge_ & other) const
  {
    if (this->instances != other.instances) {
      return false;
    }
    if (this->predicates != other.predicates) {
      return false;
    }
    if (this->functions != other.functions) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Knowledge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Knowledge_

// alias to use template instance with default allocator
using Knowledge =
  plansys2_msgs::msg::Knowledge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__STRUCT_HPP_
