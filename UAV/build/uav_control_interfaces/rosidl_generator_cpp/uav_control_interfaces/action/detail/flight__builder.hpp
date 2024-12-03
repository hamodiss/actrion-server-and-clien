// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uav_control_interfaces:action/Flight.idl
// generated code does not contain a copyright notice

#ifndef UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__BUILDER_HPP_
#define UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__BUILDER_HPP_

#include "uav_control_interfaces/action/detail/flight__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uav_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Flight_Goal_altitude
{
public:
  Init_Flight_Goal_altitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uav_control_interfaces::action::Flight_Goal altitude(::uav_control_interfaces::action::Flight_Goal::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uav_control_interfaces::action::Flight_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uav_control_interfaces::action::Flight_Goal>()
{
  return uav_control_interfaces::action::builder::Init_Flight_Goal_altitude();
}

}  // namespace uav_control_interfaces


namespace uav_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Flight_Result_current_altitude
{
public:
  Init_Flight_Result_current_altitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uav_control_interfaces::action::Flight_Result current_altitude(::uav_control_interfaces::action::Flight_Result::_current_altitude_type arg)
  {
    msg_.current_altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uav_control_interfaces::action::Flight_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uav_control_interfaces::action::Flight_Result>()
{
  return uav_control_interfaces::action::builder::Init_Flight_Result_current_altitude();
}

}  // namespace uav_control_interfaces


namespace uav_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Flight_Feedback_status
{
public:
  Init_Flight_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uav_control_interfaces::action::Flight_Feedback status(::uav_control_interfaces::action::Flight_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uav_control_interfaces::action::Flight_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uav_control_interfaces::action::Flight_Feedback>()
{
  return uav_control_interfaces::action::builder::Init_Flight_Feedback_status();
}

}  // namespace uav_control_interfaces


namespace uav_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Flight_SendGoal_Request_goal
{
public:
  explicit Init_Flight_SendGoal_Request_goal(::uav_control_interfaces::action::Flight_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::uav_control_interfaces::action::Flight_SendGoal_Request goal(::uav_control_interfaces::action::Flight_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uav_control_interfaces::action::Flight_SendGoal_Request msg_;
};

class Init_Flight_SendGoal_Request_goal_id
{
public:
  Init_Flight_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Flight_SendGoal_Request_goal goal_id(::uav_control_interfaces::action::Flight_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Flight_SendGoal_Request_goal(msg_);
  }

private:
  ::uav_control_interfaces::action::Flight_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uav_control_interfaces::action::Flight_SendGoal_Request>()
{
  return uav_control_interfaces::action::builder::Init_Flight_SendGoal_Request_goal_id();
}

}  // namespace uav_control_interfaces


namespace uav_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Flight_SendGoal_Response_stamp
{
public:
  explicit Init_Flight_SendGoal_Response_stamp(::uav_control_interfaces::action::Flight_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::uav_control_interfaces::action::Flight_SendGoal_Response stamp(::uav_control_interfaces::action::Flight_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uav_control_interfaces::action::Flight_SendGoal_Response msg_;
};

class Init_Flight_SendGoal_Response_accepted
{
public:
  Init_Flight_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Flight_SendGoal_Response_stamp accepted(::uav_control_interfaces::action::Flight_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Flight_SendGoal_Response_stamp(msg_);
  }

private:
  ::uav_control_interfaces::action::Flight_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uav_control_interfaces::action::Flight_SendGoal_Response>()
{
  return uav_control_interfaces::action::builder::Init_Flight_SendGoal_Response_accepted();
}

}  // namespace uav_control_interfaces


namespace uav_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Flight_GetResult_Request_goal_id
{
public:
  Init_Flight_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uav_control_interfaces::action::Flight_GetResult_Request goal_id(::uav_control_interfaces::action::Flight_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uav_control_interfaces::action::Flight_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uav_control_interfaces::action::Flight_GetResult_Request>()
{
  return uav_control_interfaces::action::builder::Init_Flight_GetResult_Request_goal_id();
}

}  // namespace uav_control_interfaces


namespace uav_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Flight_GetResult_Response_result
{
public:
  explicit Init_Flight_GetResult_Response_result(::uav_control_interfaces::action::Flight_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::uav_control_interfaces::action::Flight_GetResult_Response result(::uav_control_interfaces::action::Flight_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uav_control_interfaces::action::Flight_GetResult_Response msg_;
};

class Init_Flight_GetResult_Response_status
{
public:
  Init_Flight_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Flight_GetResult_Response_result status(::uav_control_interfaces::action::Flight_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Flight_GetResult_Response_result(msg_);
  }

private:
  ::uav_control_interfaces::action::Flight_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uav_control_interfaces::action::Flight_GetResult_Response>()
{
  return uav_control_interfaces::action::builder::Init_Flight_GetResult_Response_status();
}

}  // namespace uav_control_interfaces


namespace uav_control_interfaces
{

namespace action
{

namespace builder
{

class Init_Flight_FeedbackMessage_feedback
{
public:
  explicit Init_Flight_FeedbackMessage_feedback(::uav_control_interfaces::action::Flight_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::uav_control_interfaces::action::Flight_FeedbackMessage feedback(::uav_control_interfaces::action::Flight_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uav_control_interfaces::action::Flight_FeedbackMessage msg_;
};

class Init_Flight_FeedbackMessage_goal_id
{
public:
  Init_Flight_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Flight_FeedbackMessage_feedback goal_id(::uav_control_interfaces::action::Flight_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Flight_FeedbackMessage_feedback(msg_);
  }

private:
  ::uav_control_interfaces::action::Flight_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uav_control_interfaces::action::Flight_FeedbackMessage>()
{
  return uav_control_interfaces::action::builder::Init_Flight_FeedbackMessage_goal_id();
}

}  // namespace uav_control_interfaces

#endif  // UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__BUILDER_HPP_
