// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:srv/GetDomainDurativeActionDetails.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_DOMAIN_DURATIVE_ACTION_DETAILS__BUILDER_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_DOMAIN_DURATIVE_ACTION_DETAILS__BUILDER_HPP_

#include "plansys2_msgs/srv/detail/get_domain_durative_action_details__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDomainDurativeActionDetails_Request_parameters
{
public:
  explicit Init_GetDomainDurativeActionDetails_Request_parameters(::plansys2_msgs::srv::GetDomainDurativeActionDetails_Request & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::srv::GetDomainDurativeActionDetails_Request parameters(::plansys2_msgs::srv::GetDomainDurativeActionDetails_Request::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainDurativeActionDetails_Request msg_;
};

class Init_GetDomainDurativeActionDetails_Request_durative_action
{
public:
  Init_GetDomainDurativeActionDetails_Request_durative_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDomainDurativeActionDetails_Request_parameters durative_action(::plansys2_msgs::srv::GetDomainDurativeActionDetails_Request::_durative_action_type arg)
  {
    msg_.durative_action = std::move(arg);
    return Init_GetDomainDurativeActionDetails_Request_parameters(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainDurativeActionDetails_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::GetDomainDurativeActionDetails_Request>()
{
  return plansys2_msgs::srv::builder::Init_GetDomainDurativeActionDetails_Request_durative_action();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDomainDurativeActionDetails_Response_error_info
{
public:
  explicit Init_GetDomainDurativeActionDetails_Response_error_info(::plansys2_msgs::srv::GetDomainDurativeActionDetails_Response & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::srv::GetDomainDurativeActionDetails_Response error_info(::plansys2_msgs::srv::GetDomainDurativeActionDetails_Response::_error_info_type arg)
  {
    msg_.error_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainDurativeActionDetails_Response msg_;
};

class Init_GetDomainDurativeActionDetails_Response_durative_action
{
public:
  explicit Init_GetDomainDurativeActionDetails_Response_durative_action(::plansys2_msgs::srv::GetDomainDurativeActionDetails_Response & msg)
  : msg_(msg)
  {}
  Init_GetDomainDurativeActionDetails_Response_error_info durative_action(::plansys2_msgs::srv::GetDomainDurativeActionDetails_Response::_durative_action_type arg)
  {
    msg_.durative_action = std::move(arg);
    return Init_GetDomainDurativeActionDetails_Response_error_info(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainDurativeActionDetails_Response msg_;
};

class Init_GetDomainDurativeActionDetails_Response_success
{
public:
  Init_GetDomainDurativeActionDetails_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDomainDurativeActionDetails_Response_durative_action success(::plansys2_msgs::srv::GetDomainDurativeActionDetails_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetDomainDurativeActionDetails_Response_durative_action(msg_);
  }

private:
  ::plansys2_msgs::srv::GetDomainDurativeActionDetails_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::GetDomainDurativeActionDetails_Response>()
{
  return plansys2_msgs::srv::builder::Init_GetDomainDurativeActionDetails_Response_success();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_DOMAIN_DURATIVE_ACTION_DETAILS__BUILDER_HPP_
