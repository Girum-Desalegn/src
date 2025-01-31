// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:msg/Plan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__PLAN__BUILDER_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__PLAN__BUILDER_HPP_

#include "plansys2_msgs/msg/detail/plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace msg
{

namespace builder
{

class Init_Plan_items
{
public:
  Init_Plan_items()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::msg::Plan items(::plansys2_msgs::msg::Plan::_items_type arg)
  {
    msg_.items = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::msg::Plan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::msg::Plan>()
{
  return plansys2_msgs::msg::builder::Init_Plan_items();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__PLAN__BUILDER_HPP_
