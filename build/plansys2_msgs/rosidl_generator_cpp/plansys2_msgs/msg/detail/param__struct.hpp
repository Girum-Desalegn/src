// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:msg/Param.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__PARAM__STRUCT_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__PARAM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__msg__Param __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__msg__Param __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Param_
{
  using Type = Param_<ContainerAllocator>;

  explicit Param_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = "";
    }
  }

  explicit Param_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _type_type type;
  using _sub_types_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _sub_types_type sub_types;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__sub_types(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->sub_types = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::msg::Param_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::msg::Param_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::msg::Param_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::msg::Param_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::Param_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::Param_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::msg::Param_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::msg::Param_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::msg::Param_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::msg::Param_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__msg__Param
    std::shared_ptr<plansys2_msgs::msg::Param_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__msg__Param
    std::shared_ptr<plansys2_msgs::msg::Param_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Param_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->sub_types != other.sub_types) {
      return false;
    }
    return true;
  }
  bool operator!=(const Param_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Param_

// alias to use template instance with default allocator
using Param =
  plansys2_msgs::msg::Param_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__PARAM__STRUCT_HPP_
