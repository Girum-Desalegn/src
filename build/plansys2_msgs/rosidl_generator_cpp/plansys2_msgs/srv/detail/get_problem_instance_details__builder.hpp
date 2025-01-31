// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:srv/GetProblemInstanceDetails.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_PROBLEM_INSTANCE_DETAILS__BUILDER_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_PROBLEM_INSTANCE_DETAILS__BUILDER_HPP_

#include "plansys2_msgs/srv/detail/get_problem_instance_details__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetProblemInstanceDetails_Request_instance
{
public:
  Init_GetProblemInstanceDetails_Request_instance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::srv::GetProblemInstanceDetails_Request instance(::plansys2_msgs::srv::GetProblemInstanceDetails_Request::_instance_type arg)
  {
    msg_.instance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::GetProblemInstanceDetails_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::GetProblemInstanceDetails_Request>()
{
  return plansys2_msgs::srv::builder::Init_GetProblemInstanceDetails_Request_instance();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetProblemInstanceDetails_Response_error_info
{
public:
  explicit Init_GetProblemInstanceDetails_Response_error_info(::plansys2_msgs::srv::GetProblemInstanceDetails_Response & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::srv::GetProblemInstanceDetails_Response error_info(::plansys2_msgs::srv::GetProblemInstanceDetails_Response::_error_info_type arg)
  {
    msg_.error_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::GetProblemInstanceDetails_Response msg_;
};

class Init_GetProblemInstanceDetails_Response_instance
{
public:
  explicit Init_GetProblemInstanceDetails_Response_instance(::plansys2_msgs::srv::GetProblemInstanceDetails_Response & msg)
  : msg_(msg)
  {}
  Init_GetProblemInstanceDetails_Response_error_info instance(::plansys2_msgs::srv::GetProblemInstanceDetails_Response::_instance_type arg)
  {
    msg_.instance = std::move(arg);
    return Init_GetProblemInstanceDetails_Response_error_info(msg_);
  }

private:
  ::plansys2_msgs::srv::GetProblemInstanceDetails_Response msg_;
};

class Init_GetProblemInstanceDetails_Response_success
{
public:
  Init_GetProblemInstanceDetails_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetProblemInstanceDetails_Response_instance success(::plansys2_msgs::srv::GetProblemInstanceDetails_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetProblemInstanceDetails_Response_instance(msg_);
  }

private:
  ::plansys2_msgs::srv::GetProblemInstanceDetails_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::GetProblemInstanceDetails_Response>()
{
  return plansys2_msgs::srv::builder::Init_GetProblemInstanceDetails_Response_success();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_PROBLEM_INSTANCE_DETAILS__BUILDER_HPP_
