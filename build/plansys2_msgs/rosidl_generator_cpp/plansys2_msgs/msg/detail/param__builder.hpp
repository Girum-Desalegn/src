// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:msg/Param.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__PARAM__BUILDER_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__PARAM__BUILDER_HPP_

#include "plansys2_msgs/msg/detail/param__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace msg
{

namespace builder
{

class Init_Param_sub_types
{
public:
  explicit Init_Param_sub_types(::plansys2_msgs::msg::Param & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::msg::Param sub_types(::plansys2_msgs::msg::Param::_sub_types_type arg)
  {
    msg_.sub_types = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::msg::Param msg_;
};

class Init_Param_type
{
public:
  explicit Init_Param_type(::plansys2_msgs::msg::Param & msg)
  : msg_(msg)
  {}
  Init_Param_sub_types type(::plansys2_msgs::msg::Param::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Param_sub_types(msg_);
  }

private:
  ::plansys2_msgs::msg::Param msg_;
};

class Init_Param_name
{
public:
  Init_Param_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Param_type name(::plansys2_msgs::msg::Param::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Param_type(msg_);
  }

private:
  ::plansys2_msgs::msg::Param msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::msg::Param>()
{
  return plansys2_msgs::msg::builder::Init_Param_name();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__PARAM__BUILDER_HPP_
