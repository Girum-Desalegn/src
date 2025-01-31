// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cascade_lifecycle_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
#define CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_

#include "cascade_lifecycle_msgs/msg/detail/state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cascade_lifecycle_msgs
{

namespace msg
{

namespace builder
{

class Init_State_node_name
{
public:
  explicit Init_State_node_name(::cascade_lifecycle_msgs::msg::State & msg)
  : msg_(msg)
  {}
  ::cascade_lifecycle_msgs::msg::State node_name(::cascade_lifecycle_msgs::msg::State::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cascade_lifecycle_msgs::msg::State msg_;
};

class Init_State_state
{
public:
  Init_State_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_node_name state(::cascade_lifecycle_msgs::msg::State::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_State_node_name(msg_);
  }

private:
  ::cascade_lifecycle_msgs::msg::State msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cascade_lifecycle_msgs::msg::State>()
{
  return cascade_lifecycle_msgs::msg::builder::Init_State_state();
}

}  // namespace cascade_lifecycle_msgs

#endif  // CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
