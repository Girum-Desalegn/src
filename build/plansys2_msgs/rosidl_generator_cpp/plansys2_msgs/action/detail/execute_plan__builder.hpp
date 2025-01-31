// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:action/ExecutePlan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__BUILDER_HPP_
#define PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__BUILDER_HPP_

#include "plansys2_msgs/action/detail/execute_plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace action
{

namespace builder
{

class Init_ExecutePlan_Goal_plan
{
public:
  Init_ExecutePlan_Goal_plan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::action::ExecutePlan_Goal plan(::plansys2_msgs::action::ExecutePlan_Goal::_plan_type arg)
  {
    msg_.plan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::action::ExecutePlan_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::action::ExecutePlan_Goal>()
{
  return plansys2_msgs::action::builder::Init_ExecutePlan_Goal_plan();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace action
{

namespace builder
{

class Init_ExecutePlan_Result_action_execution_status
{
public:
  explicit Init_ExecutePlan_Result_action_execution_status(::plansys2_msgs::action::ExecutePlan_Result & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::action::ExecutePlan_Result action_execution_status(::plansys2_msgs::action::ExecutePlan_Result::_action_execution_status_type arg)
  {
    msg_.action_execution_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::action::ExecutePlan_Result msg_;
};

class Init_ExecutePlan_Result_success
{
public:
  Init_ExecutePlan_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecutePlan_Result_action_execution_status success(::plansys2_msgs::action::ExecutePlan_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecutePlan_Result_action_execution_status(msg_);
  }

private:
  ::plansys2_msgs::action::ExecutePlan_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::action::ExecutePlan_Result>()
{
  return plansys2_msgs::action::builder::Init_ExecutePlan_Result_success();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace action
{

namespace builder
{

class Init_ExecutePlan_Feedback_action_execution_status
{
public:
  Init_ExecutePlan_Feedback_action_execution_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::action::ExecutePlan_Feedback action_execution_status(::plansys2_msgs::action::ExecutePlan_Feedback::_action_execution_status_type arg)
  {
    msg_.action_execution_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::action::ExecutePlan_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::action::ExecutePlan_Feedback>()
{
  return plansys2_msgs::action::builder::Init_ExecutePlan_Feedback_action_execution_status();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace action
{

namespace builder
{

class Init_ExecutePlan_SendGoal_Request_goal
{
public:
  explicit Init_ExecutePlan_SendGoal_Request_goal(::plansys2_msgs::action::ExecutePlan_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::action::ExecutePlan_SendGoal_Request goal(::plansys2_msgs::action::ExecutePlan_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::action::ExecutePlan_SendGoal_Request msg_;
};

class Init_ExecutePlan_SendGoal_Request_goal_id
{
public:
  Init_ExecutePlan_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecutePlan_SendGoal_Request_goal goal_id(::plansys2_msgs::action::ExecutePlan_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecutePlan_SendGoal_Request_goal(msg_);
  }

private:
  ::plansys2_msgs::action::ExecutePlan_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::action::ExecutePlan_SendGoal_Request>()
{
  return plansys2_msgs::action::builder::Init_ExecutePlan_SendGoal_Request_goal_id();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace action
{

namespace builder
{

class Init_ExecutePlan_SendGoal_Response_stamp
{
public:
  explicit Init_ExecutePlan_SendGoal_Response_stamp(::plansys2_msgs::action::ExecutePlan_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::action::ExecutePlan_SendGoal_Response stamp(::plansys2_msgs::action::ExecutePlan_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::action::ExecutePlan_SendGoal_Response msg_;
};

class Init_ExecutePlan_SendGoal_Response_accepted
{
public:
  Init_ExecutePlan_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecutePlan_SendGoal_Response_stamp accepted(::plansys2_msgs::action::ExecutePlan_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecutePlan_SendGoal_Response_stamp(msg_);
  }

private:
  ::plansys2_msgs::action::ExecutePlan_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::action::ExecutePlan_SendGoal_Response>()
{
  return plansys2_msgs::action::builder::Init_ExecutePlan_SendGoal_Response_accepted();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace action
{

namespace builder
{

class Init_ExecutePlan_GetResult_Request_goal_id
{
public:
  Init_ExecutePlan_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::action::ExecutePlan_GetResult_Request goal_id(::plansys2_msgs::action::ExecutePlan_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::action::ExecutePlan_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::action::ExecutePlan_GetResult_Request>()
{
  return plansys2_msgs::action::builder::Init_ExecutePlan_GetResult_Request_goal_id();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace action
{

namespace builder
{

class Init_ExecutePlan_GetResult_Response_result
{
public:
  explicit Init_ExecutePlan_GetResult_Response_result(::plansys2_msgs::action::ExecutePlan_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::action::ExecutePlan_GetResult_Response result(::plansys2_msgs::action::ExecutePlan_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::action::ExecutePlan_GetResult_Response msg_;
};

class Init_ExecutePlan_GetResult_Response_status
{
public:
  Init_ExecutePlan_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecutePlan_GetResult_Response_result status(::plansys2_msgs::action::ExecutePlan_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecutePlan_GetResult_Response_result(msg_);
  }

private:
  ::plansys2_msgs::action::ExecutePlan_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::action::ExecutePlan_GetResult_Response>()
{
  return plansys2_msgs::action::builder::Init_ExecutePlan_GetResult_Response_status();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace action
{

namespace builder
{

class Init_ExecutePlan_FeedbackMessage_feedback
{
public:
  explicit Init_ExecutePlan_FeedbackMessage_feedback(::plansys2_msgs::action::ExecutePlan_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::action::ExecutePlan_FeedbackMessage feedback(::plansys2_msgs::action::ExecutePlan_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::action::ExecutePlan_FeedbackMessage msg_;
};

class Init_ExecutePlan_FeedbackMessage_goal_id
{
public:
  Init_ExecutePlan_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecutePlan_FeedbackMessage_feedback goal_id(::plansys2_msgs::action::ExecutePlan_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecutePlan_FeedbackMessage_feedback(msg_);
  }

private:
  ::plansys2_msgs::action::ExecutePlan_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::action::ExecutePlan_FeedbackMessage>()
{
  return plansys2_msgs::action::builder::Init_ExecutePlan_FeedbackMessage_goal_id();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__BUILDER_HPP_
