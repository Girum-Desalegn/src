// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:msg/DurativeAction.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__DURATIVE_ACTION__BUILDER_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__DURATIVE_ACTION__BUILDER_HPP_

#include "plansys2_msgs/msg/detail/durative_action__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace msg
{

namespace builder
{

class Init_DurativeAction_at_end_effects
{
public:
  explicit Init_DurativeAction_at_end_effects(::plansys2_msgs::msg::DurativeAction & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::msg::DurativeAction at_end_effects(::plansys2_msgs::msg::DurativeAction::_at_end_effects_type arg)
  {
    msg_.at_end_effects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::msg::DurativeAction msg_;
};

class Init_DurativeAction_at_start_effects
{
public:
  explicit Init_DurativeAction_at_start_effects(::plansys2_msgs::msg::DurativeAction & msg)
  : msg_(msg)
  {}
  Init_DurativeAction_at_end_effects at_start_effects(::plansys2_msgs::msg::DurativeAction::_at_start_effects_type arg)
  {
    msg_.at_start_effects = std::move(arg);
    return Init_DurativeAction_at_end_effects(msg_);
  }

private:
  ::plansys2_msgs::msg::DurativeAction msg_;
};

class Init_DurativeAction_at_end_requirements
{
public:
  explicit Init_DurativeAction_at_end_requirements(::plansys2_msgs::msg::DurativeAction & msg)
  : msg_(msg)
  {}
  Init_DurativeAction_at_start_effects at_end_requirements(::plansys2_msgs::msg::DurativeAction::_at_end_requirements_type arg)
  {
    msg_.at_end_requirements = std::move(arg);
    return Init_DurativeAction_at_start_effects(msg_);
  }

private:
  ::plansys2_msgs::msg::DurativeAction msg_;
};

class Init_DurativeAction_over_all_requirements
{
public:
  explicit Init_DurativeAction_over_all_requirements(::plansys2_msgs::msg::DurativeAction & msg)
  : msg_(msg)
  {}
  Init_DurativeAction_at_end_requirements over_all_requirements(::plansys2_msgs::msg::DurativeAction::_over_all_requirements_type arg)
  {
    msg_.over_all_requirements = std::move(arg);
    return Init_DurativeAction_at_end_requirements(msg_);
  }

private:
  ::plansys2_msgs::msg::DurativeAction msg_;
};

class Init_DurativeAction_at_start_requirements
{
public:
  explicit Init_DurativeAction_at_start_requirements(::plansys2_msgs::msg::DurativeAction & msg)
  : msg_(msg)
  {}
  Init_DurativeAction_over_all_requirements at_start_requirements(::plansys2_msgs::msg::DurativeAction::_at_start_requirements_type arg)
  {
    msg_.at_start_requirements = std::move(arg);
    return Init_DurativeAction_over_all_requirements(msg_);
  }

private:
  ::plansys2_msgs::msg::DurativeAction msg_;
};

class Init_DurativeAction_parameters
{
public:
  explicit Init_DurativeAction_parameters(::plansys2_msgs::msg::DurativeAction & msg)
  : msg_(msg)
  {}
  Init_DurativeAction_at_start_requirements parameters(::plansys2_msgs::msg::DurativeAction::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return Init_DurativeAction_at_start_requirements(msg_);
  }

private:
  ::plansys2_msgs::msg::DurativeAction msg_;
};

class Init_DurativeAction_name
{
public:
  Init_DurativeAction_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DurativeAction_parameters name(::plansys2_msgs::msg::DurativeAction::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DurativeAction_parameters(msg_);
  }

private:
  ::plansys2_msgs::msg::DurativeAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::msg::DurativeAction>()
{
  return plansys2_msgs::msg::builder::Init_DurativeAction_name();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__DURATIVE_ACTION__BUILDER_HPP_
