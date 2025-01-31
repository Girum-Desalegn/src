// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:msg/Tree.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__TREE__BUILDER_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__TREE__BUILDER_HPP_

#include "plansys2_msgs/msg/detail/tree__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace msg
{

namespace builder
{

class Init_Tree_nodes
{
public:
  Init_Tree_nodes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::msg::Tree nodes(::plansys2_msgs::msg::Tree::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::msg::Tree msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::msg::Tree>()
{
  return plansys2_msgs::msg::builder::Init_Tree_nodes();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__TREE__BUILDER_HPP_
