// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:srv/AddProblem.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__ADD_PROBLEM__BUILDER_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__ADD_PROBLEM__BUILDER_HPP_

#include "plansys2_msgs/srv/detail/add_problem__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_AddProblem_Request_problem
{
public:
  Init_AddProblem_Request_problem()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::srv::AddProblem_Request problem(::plansys2_msgs::srv::AddProblem_Request::_problem_type arg)
  {
    msg_.problem = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::AddProblem_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::AddProblem_Request>()
{
  return plansys2_msgs::srv::builder::Init_AddProblem_Request_problem();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_AddProblem_Response_error_info
{
public:
  explicit Init_AddProblem_Response_error_info(::plansys2_msgs::srv::AddProblem_Response & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::srv::AddProblem_Response error_info(::plansys2_msgs::srv::AddProblem_Response::_error_info_type arg)
  {
    msg_.error_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::AddProblem_Response msg_;
};

class Init_AddProblem_Response_success
{
public:
  Init_AddProblem_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddProblem_Response_error_info success(::plansys2_msgs::srv::AddProblem_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AddProblem_Response_error_info(msg_);
  }

private:
  ::plansys2_msgs::srv::AddProblem_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::AddProblem_Response>()
{
  return plansys2_msgs::srv::builder::Init_AddProblem_Response_success();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__ADD_PROBLEM__BUILDER_HPP_
