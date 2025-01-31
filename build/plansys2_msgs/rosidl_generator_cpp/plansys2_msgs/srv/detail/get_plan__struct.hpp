// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__srv__GetPlan_Request __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__srv__GetPlan_Request __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPlan_Request_
{
  using Type = GetPlan_Request_<ContainerAllocator>;

  explicit GetPlan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->domain = "";
      this->problem = "";
    }
  }

  explicit GetPlan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : domain(_alloc),
    problem(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->domain = "";
      this->problem = "";
    }
  }

  // field types and members
  using _domain_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _domain_type domain;
  using _problem_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _problem_type problem;

  // setters for named parameter idiom
  Type & set__domain(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->domain = _arg;
    return *this;
  }
  Type & set__problem(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->problem = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::srv::GetPlan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::srv::GetPlan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::srv::GetPlan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::srv::GetPlan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::GetPlan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::GetPlan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::GetPlan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::GetPlan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::srv::GetPlan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::srv::GetPlan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__srv__GetPlan_Request
    std::shared_ptr<plansys2_msgs::srv::GetPlan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__srv__GetPlan_Request
    std::shared_ptr<plansys2_msgs::srv::GetPlan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_Request_ & other) const
  {
    if (this->domain != other.domain) {
      return false;
    }
    if (this->problem != other.problem) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_Request_

// alias to use template instance with default allocator
using GetPlan_Request =
  plansys2_msgs::srv::GetPlan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace plansys2_msgs


// Include directives for member types
// Member 'plan'
#include "plansys2_msgs/msg/detail/plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__srv__GetPlan_Response __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__srv__GetPlan_Response __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPlan_Response_
{
  using Type = GetPlan_Response_<ContainerAllocator>;

  explicit GetPlan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_info = "";
    }
  }

  explicit GetPlan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan(_alloc, _init),
    error_info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_info = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _plan_type =
    plansys2_msgs::msg::Plan_<ContainerAllocator>;
  _plan_type plan;
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
  Type & set__plan(
    const plansys2_msgs::msg::Plan_<ContainerAllocator> & _arg)
  {
    this->plan = _arg;
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
    plansys2_msgs::srv::GetPlan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::srv::GetPlan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::srv::GetPlan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::srv::GetPlan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::GetPlan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::GetPlan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::GetPlan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::GetPlan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::srv::GetPlan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::srv::GetPlan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__srv__GetPlan_Response
    std::shared_ptr<plansys2_msgs::srv::GetPlan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__srv__GetPlan_Response
    std::shared_ptr<plansys2_msgs::srv::GetPlan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlan_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->plan != other.plan) {
      return false;
    }
    if (this->error_info != other.error_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlan_Response_

// alias to use template instance with default allocator
using GetPlan_Response =
  plansys2_msgs::srv::GetPlan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace plansys2_msgs

namespace plansys2_msgs
{

namespace srv
{

struct GetPlan
{
  using Request = plansys2_msgs::srv::GetPlan_Request;
  using Response = plansys2_msgs::srv::GetPlan_Response;
};

}  // namespace srv

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_HPP_
