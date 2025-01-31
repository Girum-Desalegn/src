// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_PLAN__BUILDER_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_PLAN__BUILDER_HPP_

#include "plansys2_msgs/srv/detail/get_plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPlan_Request_problem
{
public:
  explicit Init_GetPlan_Request_problem(::plansys2_msgs::srv::GetPlan_Request & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::srv::GetPlan_Request problem(::plansys2_msgs::srv::GetPlan_Request::_problem_type arg)
  {
    msg_.problem = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::GetPlan_Request msg_;
};

class Init_GetPlan_Request_domain
{
public:
  Init_GetPlan_Request_domain()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlan_Request_problem domain(::plansys2_msgs::srv::GetPlan_Request::_domain_type arg)
  {
    msg_.domain = std::move(arg);
    return Init_GetPlan_Request_problem(msg_);
  }

private:
  ::plansys2_msgs::srv::GetPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::GetPlan_Request>()
{
  return plansys2_msgs::srv::builder::Init_GetPlan_Request_domain();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPlan_Response_error_info
{
public:
  explicit Init_GetPlan_Response_error_info(::plansys2_msgs::srv::GetPlan_Response & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::srv::GetPlan_Response error_info(::plansys2_msgs::srv::GetPlan_Response::_error_info_type arg)
  {
    msg_.error_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::GetPlan_Response msg_;
};

class Init_GetPlan_Response_plan
{
public:
  explicit Init_GetPlan_Response_plan(::plansys2_msgs::srv::GetPlan_Response & msg)
  : msg_(msg)
  {}
  Init_GetPlan_Response_error_info plan(::plansys2_msgs::srv::GetPlan_Response::_plan_type arg)
  {
    msg_.plan = std::move(arg);
    return Init_GetPlan_Response_error_info(msg_);
  }

private:
  ::plansys2_msgs::srv::GetPlan_Response msg_;
};

class Init_GetPlan_Response_success
{
public:
  Init_GetPlan_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlan_Response_plan success(::plansys2_msgs::srv::GetPlan_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetPlan_Response_plan(msg_);
  }

private:
  ::plansys2_msgs::srv::GetPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::GetPlan_Response>()
{
  return plansys2_msgs::srv::builder::Init_GetPlan_Response_success();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_PLAN__BUILDER_HPP_
