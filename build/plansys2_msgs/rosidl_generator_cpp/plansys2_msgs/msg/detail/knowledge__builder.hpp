// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:msg/Knowledge.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__BUILDER_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__BUILDER_HPP_

#include "plansys2_msgs/msg/detail/knowledge__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace msg
{

namespace builder
{

class Init_Knowledge_goal
{
public:
  explicit Init_Knowledge_goal(::plansys2_msgs::msg::Knowledge & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::msg::Knowledge goal(::plansys2_msgs::msg::Knowledge::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::msg::Knowledge msg_;
};

class Init_Knowledge_functions
{
public:
  explicit Init_Knowledge_functions(::plansys2_msgs::msg::Knowledge & msg)
  : msg_(msg)
  {}
  Init_Knowledge_goal functions(::plansys2_msgs::msg::Knowledge::_functions_type arg)
  {
    msg_.functions = std::move(arg);
    return Init_Knowledge_goal(msg_);
  }

private:
  ::plansys2_msgs::msg::Knowledge msg_;
};

class Init_Knowledge_predicates
{
public:
  explicit Init_Knowledge_predicates(::plansys2_msgs::msg::Knowledge & msg)
  : msg_(msg)
  {}
  Init_Knowledge_functions predicates(::plansys2_msgs::msg::Knowledge::_predicates_type arg)
  {
    msg_.predicates = std::move(arg);
    return Init_Knowledge_functions(msg_);
  }

private:
  ::plansys2_msgs::msg::Knowledge msg_;
};

class Init_Knowledge_instances
{
public:
  Init_Knowledge_instances()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Knowledge_predicates instances(::plansys2_msgs::msg::Knowledge::_instances_type arg)
  {
    msg_.instances = std::move(arg);
    return Init_Knowledge_predicates(msg_);
  }

private:
  ::plansys2_msgs::msg::Knowledge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::msg::Knowledge>()
{
  return plansys2_msgs::msg::builder::Init_Knowledge_instances();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__BUILDER_HPP_
