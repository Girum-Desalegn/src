// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:srv/GetDomainActionDetails.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_DOMAIN_ACTION_DETAILS__BUILDER_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_DOMAIN_ACTION_DETAILS__BUILDER_HPP_

#include "plansys2_msgs/srv/detail/get_domain_action_details__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDomainActionDetails_Request_parameters
{
public:
  explicit Init_GetDomainActionDetails_Request_parameters(::plansys2_msgs::srv::GetDomainActionDetails_Request & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::srv::GetDomainActionDetails_Request parameters(::plansys2_msgs::srv::GetDomainActionDetails_Request::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainActionDetails_Request msg_;
};

class Init_GetDomainActionDetails_Request_action
{
public:
  Init_GetDomainActionDetails_Request_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDomainActionDetails_Request_parameters action(::plansys2_msgs::srv::GetDomainActionDetails_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_GetDomainActionDetails_Request_parameters(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainActionDetails_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::GetDomainActionDetails_Request>()
{
  return plansys2_msgs::srv::builder::Init_GetDomainActionDetails_Request_action();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDomainActionDetails_Response_error_info
{
public:
  explicit Init_GetDomainActionDetails_Response_error_info(::plansys2_msgs::srv::GetDomainActionDetails_Response & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::srv::GetDomainActionDetails_Response error_info(::plansys2_msgs::srv::GetDomainActionDetails_Response::_error_info_type arg)
  {
    msg_.error_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainActionDetails_Response msg_;
};

class Init_GetDomainActionDetails_Response_success
{
public:
  explicit Init_GetDomainActionDetails_Response_success(::plansys2_msgs::srv::GetDomainActionDetails_Response & msg)
  : msg_(msg)
  {}
  Init_GetDomainActionDetails_Response_error_info success(::plansys2_msgs::srv::GetDomainActionDetails_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetDomainActionDetails_Response_error_info(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainActionDetails_Response msg_;
};

class Init_GetDomainActionDetails_Response_action
{
public:
  Init_GetDomainActionDetails_Response_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDomainActionDetails_Response_success action(::plansys2_msgs::srv::GetDomainActionDetails_Response::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_GetDomainActionDetails_Response_success(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainActionDetails_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::GetDomainActionDetails_Response>()
{
  return plansys2_msgs::srv::builder::Init_GetDomainActionDetails_Response_action();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_DOMAIN_ACTION_DETAILS__BUILDER_HPP_
