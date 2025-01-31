// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:msg/PlanItem.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__PLAN_ITEM__BUILDER_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__PLAN_ITEM__BUILDER_HPP_

#include "plansys2_msgs/msg/detail/plan_item__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanItem_duration
{
public:
  explicit Init_PlanItem_duration(::plansys2_msgs::msg::PlanItem & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::msg::PlanItem duration(::plansys2_msgs::msg::PlanItem::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::msg::PlanItem msg_;
};

class Init_PlanItem_action
{
public:
  explicit Init_PlanItem_action(::plansys2_msgs::msg::PlanItem & msg)
  : msg_(msg)
  {}
  Init_PlanItem_duration action(::plansys2_msgs::msg::PlanItem::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_PlanItem_duration(msg_);
  }

private:
  ::plansys2_msgs::msg::PlanItem msg_;
};

class Init_PlanItem_time
{
public:
  Init_PlanItem_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanItem_action time(::plansys2_msgs::msg::PlanItem::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_PlanItem_action(msg_);
  }

private:
  ::plansys2_msgs::msg::PlanItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::msg::PlanItem>()
{
  return plansys2_msgs::msg::builder::Init_PlanItem_time();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__PLAN_ITEM__BUILDER_HPP_
