// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:srv/IsProblemGoalSatisfied.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__IS_PROBLEM_GOAL_SATISFIED__STRUCT_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__IS_PROBLEM_GOAL_SATISFIED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'tree'
#include "plansys2_msgs/msg/detail/tree__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__srv__IsProblemGoalSatisfied_Request __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__srv__IsProblemGoalSatisfied_Request __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsProblemGoalSatisfied_Request_
{
  using Type = IsProblemGoalSatisfied_Request_<ContainerAllocator>;

  explicit IsProblemGoalSatisfied_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tree(_init)
  {
    (void)_init;
  }

  explicit IsProblemGoalSatisfied_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tree(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _tree_type =
    plansys2_msgs::msg::Tree_<ContainerAllocator>;
  _tree_type tree;

  // setters for named parameter idiom
  Type & set__tree(
    const plansys2_msgs::msg::Tree_<ContainerAllocator> & _arg)
  {
    this->tree = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::srv::IsProblemGoalSatisfied_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::srv::IsProblemGoalSatisfied_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::IsProblemGoalSatisfied_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::IsProblemGoalSatisfied_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__srv__IsProblemGoalSatisfied_Request
    std::shared_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__srv__IsProblemGoalSatisfied_Request
    std::shared_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsProblemGoalSatisfied_Request_ & other) const
  {
    if (this->tree != other.tree) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsProblemGoalSatisfied_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsProblemGoalSatisfied_Request_

// alias to use template instance with default allocator
using IsProblemGoalSatisfied_Request =
  plansys2_msgs::srv::IsProblemGoalSatisfied_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace plansys2_msgs


#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__srv__IsProblemGoalSatisfied_Response __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__srv__IsProblemGoalSatisfied_Response __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsProblemGoalSatisfied_Response_
{
  using Type = IsProblemGoalSatisfied_Response_<ContainerAllocator>;

  explicit IsProblemGoalSatisfied_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->satisfied = false;
      this->error_info = "";
    }
  }

  explicit IsProblemGoalSatisfied_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->satisfied = false;
      this->error_info = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _satisfied_type =
    bool;
  _satisfied_type satisfied;
  using _error_info_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_info_type error_info;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__satisfied(
    const bool & _arg)
  {
    this->satisfied = _arg;
    return *this;
  }
  Type & set__error_info(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::srv::IsProblemGoalSatisfied_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::srv::IsProblemGoalSatisfied_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::IsProblemGoalSatisfied_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::IsProblemGoalSatisfied_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__srv__IsProblemGoalSatisfied_Response
    std::shared_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__srv__IsProblemGoalSatisfied_Response
    std::shared_ptr<plansys2_msgs::srv::IsProblemGoalSatisfied_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsProblemGoalSatisfied_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->satisfied != other.satisfied) {
      return false;
    }
    if (this->error_info != other.error_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsProblemGoalSatisfied_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsProblemGoalSatisfied_Response_

// alias to use template instance with default allocator
using IsProblemGoalSatisfied_Response =
  plansys2_msgs::srv::IsProblemGoalSatisfied_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace plansys2_msgs

namespace plansys2_msgs
{

namespace srv
{

struct IsProblemGoalSatisfied
{
  using Request = plansys2_msgs::srv::IsProblemGoalSatisfied_Request;
  using Response = plansys2_msgs::srv::IsProblemGoalSatisfied_Response;
};

}  // namespace srv

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__IS_PROBLEM_GOAL_SATISFIED__STRUCT_HPP_
