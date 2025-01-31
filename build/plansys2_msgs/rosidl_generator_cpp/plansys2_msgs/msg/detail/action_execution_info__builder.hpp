// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:msg/ActionExecutionInfo.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__BUILDER_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__BUILDER_HPP_

#include "plansys2_msgs/msg/detail/action_execution_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionExecutionInfo_message_status
{
public:
  explicit Init_ActionExecutionInfo_message_status(::plansys2_msgs::msg::ActionExecutionInfo & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::msg::ActionExecutionInfo message_status(::plansys2_msgs::msg::ActionExecutionInfo::_message_status_type arg)
  {
    msg_.message_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecutionInfo msg_;
};

class Init_ActionExecutionInfo_completion
{
public:
  explicit Init_ActionExecutionInfo_completion(::plansys2_msgs::msg::ActionExecutionInfo & msg)
  : msg_(msg)
  {}
  Init_ActionExecutionInfo_message_status completion(::plansys2_msgs::msg::ActionExecutionInfo::_completion_type arg)
  {
    msg_.completion = std::move(arg);
    return Init_ActionExecutionInfo_message_status(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecutionInfo msg_;
};

class Init_ActionExecutionInfo_duration
{
public:
  explicit Init_ActionExecutionInfo_duration(::plansys2_msgs::msg::ActionExecutionInfo & msg)
  : msg_(msg)
  {}
  Init_ActionExecutionInfo_completion duration(::plansys2_msgs::msg::ActionExecutionInfo::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_ActionExecutionInfo_completion(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecutionInfo msg_;
};

class Init_ActionExecutionInfo_arguments
{
public:
  explicit Init_ActionExecutionInfo_arguments(::plansys2_msgs::msg::ActionExecutionInfo & msg)
  : msg_(msg)
  {}
  Init_ActionExecutionInfo_duration arguments(::plansys2_msgs::msg::ActionExecutionInfo::_arguments_type arg)
  {
    msg_.arguments = std::move(arg);
    return Init_ActionExecutionInfo_duration(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecutionInfo msg_;
};

class Init_ActionExecutionInfo_action
{
public:
  explicit Init_ActionExecutionInfo_action(::plansys2_msgs::msg::ActionExecutionInfo & msg)
  : msg_(msg)
  {}
  Init_ActionExecutionInfo_arguments action(::plansys2_msgs::msg::ActionExecutionInfo::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_ActionExecutionInfo_arguments(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecutionInfo msg_;
};

class Init_ActionExecutionInfo_action_full_name
{
public:
  explicit Init_ActionExecutionInfo_action_full_name(::plansys2_msgs::msg::ActionExecutionInfo & msg)
  : msg_(msg)
  {}
  Init_ActionExecutionInfo_action action_full_name(::plansys2_msgs::msg::ActionExecutionInfo::_action_full_name_type arg)
  {
    msg_.action_full_name = std::move(arg);
    return Init_ActionExecutionInfo_action(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecutionInfo msg_;
};

class Init_ActionExecutionInfo_status_stamp
{
public:
  explicit Init_ActionExecutionInfo_status_stamp(::plansys2_msgs::msg::ActionExecutionInfo & msg)
  : msg_(msg)
  {}
  Init_ActionExecutionInfo_action_full_name status_stamp(::plansys2_msgs::msg::ActionExecutionInfo::_status_stamp_type arg)
  {
    msg_.status_stamp = std::move(arg);
    return Init_ActionExecutionInfo_action_full_name(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecutionInfo msg_;
};

class Init_ActionExecutionInfo_start_stamp
{
public:
  explicit Init_ActionExecutionInfo_start_stamp(::plansys2_msgs::msg::ActionExecutionInfo & msg)
  : msg_(msg)
  {}
  Init_ActionExecutionInfo_status_stamp start_stamp(::plansys2_msgs::msg::ActionExecutionInfo::_start_stamp_type arg)
  {
    msg_.start_stamp = std::move(arg);
    return Init_ActionExecutionInfo_status_stamp(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecutionInfo msg_;
};

class Init_ActionExecutionInfo_status
{
public:
  Init_ActionExecutionInfo_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionExecutionInfo_start_stamp status(::plansys2_msgs::msg::ActionExecutionInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ActionExecutionInfo_start_stamp(msg_);
  }

private:
  ::plansys2_msgs::msg::ActionExecutionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::msg::ActionExecutionInfo>()
{
  return plansys2_msgs::msg::builder::Init_ActionExecutionInfo_status();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__BUILDER_HPP_
