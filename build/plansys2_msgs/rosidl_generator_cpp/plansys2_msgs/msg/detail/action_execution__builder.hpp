// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:msg/ActionExecution.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION__BUILDER_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION__BUILDER_HPP_

#include "plansys2_msgs/msg/detail/action_execution__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionExecution_status
{
public:
  explicit Init_ActionExecution_status(::plansys2_msgs::msg::ActionExecution & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::msg::ActionExecution status(::plansys2_msgs::msg::ActionExecution::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecution msg_;
};

class Init_ActionExecution_completion
{
public:
  explicit Init_ActionExecution_completion(::plansys2_msgs::msg::ActionExecution & msg)
  : msg_(msg)
  {}
  Init_ActionExecution_status completion(::plansys2_msgs::msg::ActionExecution::_completion_type arg)
  {
    msg_.completion = std::move(arg);
    return Init_ActionExecution_status(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecution msg_;
};

class Init_ActionExecution_success
{
public:
  explicit Init_ActionExecution_success(::plansys2_msgs::msg::ActionExecution & msg)
  : msg_(msg)
  {}
  Init_ActionExecution_completion success(::plansys2_msgs::msg::ActionExecution::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ActionExecution_completion(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecution msg_;
};

class Init_ActionExecution_arguments
{
public:
  explicit Init_ActionExecution_arguments(::plansys2_msgs::msg::ActionExecution & msg)
  : msg_(msg)
  {}
  Init_ActionExecution_success arguments(::plansys2_msgs::msg::ActionExecution::_arguments_type arg)
  {
    msg_.arguments = std::move(arg);
    return Init_ActionExecution_success(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecution msg_;
};

class Init_ActionExecution_action
{
public:
  explicit Init_ActionExecution_action(::plansys2_msgs::msg::ActionExecution & msg)
  : msg_(msg)
  {}
  Init_ActionExecution_arguments action(::plansys2_msgs::msg::ActionExecution::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_ActionExecution_arguments(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecution msg_;
};

class Init_ActionExecution_node_id
{
public:
  explicit Init_ActionExecution_node_id(::plansys2_msgs::msg::ActionExecution & msg)
  : msg_(msg)
  {}
  Init_ActionExecution_action node_id(::plansys2_msgs::msg::ActionExecution::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_ActionExecution_action(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecution msg_;
};

class Init_ActionExecution_type
{
public:
  Init_ActionExecution_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionExecution_node_id type(::plansys2_msgs::msg::ActionExecution::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ActionExecution_node_id(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecution msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::msg::ActionExecution>()
{
  return plansys2_msgs::msg::builder::Init_ActionExecution_type();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION__BUILDER_HPP_
