// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:msg/ActionPerformerStatus.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION_PERFORMER_STATUS__BUILDER_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION_PERFORMER_STATUS__BUILDER_HPP_

#include "plansys2_msgs/msg/detail/action_performer_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionPerformerStatus_node_name
{
public:
  explicit Init_ActionPerformerStatus_node_name(::plansys2_msgs::msg::ActionPerformerStatus & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::msg::ActionPerformerStatus node_name(::plansys2_msgs::msg::ActionPerformerStatus::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionPerformerStatus msg_;
};

class Init_ActionPerformerStatus_specialized_arguments
{
public:
  explicit Init_ActionPerformerStatus_specialized_arguments(::plansys2_msgs::msg::ActionPerformerStatus & msg)
  : msg_(msg)
  {}
  Init_ActionPerformerStatus_node_name specialized_arguments(::plansys2_msgs::msg::ActionPerformerStatus::_specialized_arguments_type arg)
  {
    msg_.specialized_arguments = std::move(arg);
    return Init_ActionPerformerStatus_node_name(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionPerformerStatus msg_;
};

class Init_ActionPerformerStatus_action
{
public:
  explicit Init_ActionPerformerStatus_action(::plansys2_msgs::msg::ActionPerformerStatus & msg)
  : msg_(msg)
  {}
  Init_ActionPerformerStatus_specialized_arguments action(::plansys2_msgs::msg::ActionPerformerStatus::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_ActionPerformerStatus_specialized_arguments(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionPerformerStatus msg_;
};

class Init_ActionPerformerStatus_state
{
public:
  Init_ActionPerformerStatus_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionPerformerStatus_action state(::plansys2_msgs::msg::ActionPerformerStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_ActionPerformerStatus_action(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionPerformerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::msg::ActionPerformerStatus>()
{
  return plansys2_msgs::msg::builder::Init_ActionPerformerStatus_state();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION_PERFORMER_STATUS__BUILDER_HPP_
