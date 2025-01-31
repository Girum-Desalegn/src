// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:srv/AffectParam.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__AFFECT_PARAM__STRUCT_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__AFFECT_PARAM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'param'
#include "plansys2_msgs/msg/detail/param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__srv__AffectParam_Request __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__srv__AffectParam_Request __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AffectParam_Request_
{
  using Type = AffectParam_Request_<ContainerAllocator>;

  explicit AffectParam_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : param(_init)
  {
    (void)_init;
  }

  explicit AffectParam_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : param(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _param_type =
    plansys2_msgs::msg::Param_<ContainerAllocator>;
  _param_type param;

  // setters for named parameter idiom
  Type & set__param(
    const plansys2_msgs::msg::Param_<ContainerAllocator> & _arg)
  {
    this->param = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::srv::AffectParam_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::srv::AffectParam_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::srv::AffectParam_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::srv::AffectParam_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::AffectParam_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::AffectParam_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::AffectParam_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::AffectParam_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::srv::AffectParam_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::srv::AffectParam_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__srv__AffectParam_Request
    std::shared_ptr<plansys2_msgs::srv::AffectParam_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__srv__AffectParam_Request
    std::shared_ptr<plansys2_msgs::srv::AffectParam_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AffectParam_Request_ & other) const
  {
    if (this->param != other.param) {
      return false;
    }
    return true;
  }
  bool operator!=(const AffectParam_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AffectParam_Request_

// alias to use template instance with default allocator
using AffectParam_Request =
  plansys2_msgs::srv::AffectParam_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace plansys2_msgs


#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__srv__AffectParam_Response __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__srv__AffectParam_Response __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AffectParam_Response_
{
  using Type = AffectParam_Response_<ContainerAllocator>;

  explicit AffectParam_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_info = "";
    }
  }

  explicit AffectParam_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_info(_alloc)
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
  Type & set__error_info(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::srv::AffectParam_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::srv::AffectParam_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::srv::AffectParam_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::srv::AffectParam_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::AffectParam_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::AffectParam_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::srv::AffectParam_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::srv::AffectParam_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::srv::AffectParam_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::srv::AffectParam_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__srv__AffectParam_Response
    std::shared_ptr<plansys2_msgs::srv::AffectParam_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__srv__AffectParam_Response
    std::shared_ptr<plansys2_msgs::srv::AffectParam_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AffectParam_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_info != other.error_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const AffectParam_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AffectParam_Response_

// alias to use template instance with default allocator
using AffectParam_Response =
  plansys2_msgs::srv::AffectParam_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace plansys2_msgs

namespace plansys2_msgs
{

namespace srv
{

struct AffectParam
{
  using Request = plansys2_msgs::srv::AffectParam_Request;
  using Response = plansys2_msgs::srv::AffectParam_Response;
};

}  // namespace srv

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__AFFECT_PARAM__STRUCT_HPP_
