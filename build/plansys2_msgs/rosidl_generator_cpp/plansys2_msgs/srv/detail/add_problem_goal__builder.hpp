// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:srv/AddProblemGoal.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__ADD_PROBLEM_GOAL__BUILDER_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__ADD_PROBLEM_GOAL__BUILDER_HPP_

#include "plansys2_msgs/srv/detail/add_problem_goal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_AddProblemGoal_Request_tree
{
public:
  Init_AddProblemGoal_Request_tree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::srv::AddProblemGoal_Request tree(::plansys2_msgs::srv::AddProblemGoal_Request::_tree_type arg)
  {
    msg_.tree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::AddProblemGoal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::AddProblemGoal_Request>()
{
  return plansys2_msgs::srv::builder::Init_AddProblemGoal_Request_tree();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_AddProblemGoal_Response_error_info
{
public:
  explicit Init_AddProblemGoal_Response_error_info(::plansys2_msgs::srv::AddProblemGoal_Response & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::srv::AddProblemGoal_Response error_info(::plansys2_msgs::srv::AddProblemGoal_Response::_error_info_type arg)
  {
    msg_.error_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::AddProblemGoal_Response msg_;
};

class Init_AddProblemGoal_Response_success
{
public:
  Init_AddProblemGoal_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddProblemGoal_Response_error_info success(::plansys2_msgs::srv::AddProblemGoal_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AddProblemGoal_Response_error_info(msg_);
  }

private:
  ::plansys2_msgs::srv::AddProblemGoal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::AddProblemGoal_Response>()
{
  return plansys2_msgs::srv::builder::Init_AddProblemGoal_Response_success();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__ADD_PROBLEM_GOAL__BUILDER_HPP_
