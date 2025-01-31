// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION__BUILDER_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION__BUILDER_HPP_

#include "plansys2_msgs/msg/detail/action__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace msg
{

namespace builder
{

class Init_Action_effects
{
public:
  explicit Init_Action_effects(::plansys2_msgs::msg::Action & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::msg::Action effects(::plansys2_msgs::msg::Action::_effects_type arg)
  {
    msg_.effects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::msg::Action msg_;
};

class Init_Action_preconditions
{
public:
  explicit Init_Action_preconditions(::plansys2_msgs::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_effects preconditions(::plansys2_msgs::msg::Action::_preconditions_type arg)
  {
    msg_.preconditions = std::move(arg);
    return Init_Action_effects(msg_);
  }

private:
  ::plansys2_msgs::msg::Action msg_;
};

class Init_Action_parameters
{
public:
  explicit Init_Action_parameters(::plansys2_msgs::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_preconditions parameters(::plansys2_msgs::msg::Action::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return Init_Action_preconditions(msg_);
  }

private:
  ::plansys2_msgs::msg::Action msg_;
};

class Init_Action_name
{
public:
  Init_Action_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action_parameters name(::plansys2_msgs::msg::Action::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Action_parameters(msg_);
  }

private:
  ::plansys2_msgs::msg::Action msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::msg::Action>()
{
  return plansys2_msgs::msg::builder::Init_Action_name();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION__BUILDER_HPP_
