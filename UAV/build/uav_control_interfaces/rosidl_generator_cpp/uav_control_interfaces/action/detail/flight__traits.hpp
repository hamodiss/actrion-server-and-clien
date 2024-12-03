// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uav_control_interfaces:action/Flight.idl
// generated code does not contain a copyright notice

#ifndef UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__TRAITS_HPP_
#define UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__TRAITS_HPP_

#include "uav_control_interfaces/action/detail/flight__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uav_control_interfaces::action::Flight_Goal>()
{
  return "uav_control_interfaces::action::Flight_Goal";
}

template<>
inline const char * name<uav_control_interfaces::action::Flight_Goal>()
{
  return "uav_control_interfaces/action/Flight_Goal";
}

template<>
struct has_fixed_size<uav_control_interfaces::action::Flight_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uav_control_interfaces::action::Flight_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uav_control_interfaces::action::Flight_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uav_control_interfaces::action::Flight_Result>()
{
  return "uav_control_interfaces::action::Flight_Result";
}

template<>
inline const char * name<uav_control_interfaces::action::Flight_Result>()
{
  return "uav_control_interfaces/action/Flight_Result";
}

template<>
struct has_fixed_size<uav_control_interfaces::action::Flight_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uav_control_interfaces::action::Flight_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uav_control_interfaces::action::Flight_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uav_control_interfaces::action::Flight_Feedback>()
{
  return "uav_control_interfaces::action::Flight_Feedback";
}

template<>
inline const char * name<uav_control_interfaces::action::Flight_Feedback>()
{
  return "uav_control_interfaces/action/Flight_Feedback";
}

template<>
struct has_fixed_size<uav_control_interfaces::action::Flight_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uav_control_interfaces::action::Flight_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uav_control_interfaces::action::Flight_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "uav_control_interfaces/action/detail/flight__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uav_control_interfaces::action::Flight_SendGoal_Request>()
{
  return "uav_control_interfaces::action::Flight_SendGoal_Request";
}

template<>
inline const char * name<uav_control_interfaces::action::Flight_SendGoal_Request>()
{
  return "uav_control_interfaces/action/Flight_SendGoal_Request";
}

template<>
struct has_fixed_size<uav_control_interfaces::action::Flight_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<uav_control_interfaces::action::Flight_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<uav_control_interfaces::action::Flight_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<uav_control_interfaces::action::Flight_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<uav_control_interfaces::action::Flight_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uav_control_interfaces::action::Flight_SendGoal_Response>()
{
  return "uav_control_interfaces::action::Flight_SendGoal_Response";
}

template<>
inline const char * name<uav_control_interfaces::action::Flight_SendGoal_Response>()
{
  return "uav_control_interfaces/action/Flight_SendGoal_Response";
}

template<>
struct has_fixed_size<uav_control_interfaces::action::Flight_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<uav_control_interfaces::action::Flight_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<uav_control_interfaces::action::Flight_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uav_control_interfaces::action::Flight_SendGoal>()
{
  return "uav_control_interfaces::action::Flight_SendGoal";
}

template<>
inline const char * name<uav_control_interfaces::action::Flight_SendGoal>()
{
  return "uav_control_interfaces/action/Flight_SendGoal";
}

template<>
struct has_fixed_size<uav_control_interfaces::action::Flight_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<uav_control_interfaces::action::Flight_SendGoal_Request>::value &&
    has_fixed_size<uav_control_interfaces::action::Flight_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<uav_control_interfaces::action::Flight_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<uav_control_interfaces::action::Flight_SendGoal_Request>::value &&
    has_bounded_size<uav_control_interfaces::action::Flight_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<uav_control_interfaces::action::Flight_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<uav_control_interfaces::action::Flight_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uav_control_interfaces::action::Flight_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uav_control_interfaces::action::Flight_GetResult_Request>()
{
  return "uav_control_interfaces::action::Flight_GetResult_Request";
}

template<>
inline const char * name<uav_control_interfaces::action::Flight_GetResult_Request>()
{
  return "uav_control_interfaces/action/Flight_GetResult_Request";
}

template<>
struct has_fixed_size<uav_control_interfaces::action::Flight_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<uav_control_interfaces::action::Flight_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<uav_control_interfaces::action::Flight_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "uav_control_interfaces/action/detail/flight__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uav_control_interfaces::action::Flight_GetResult_Response>()
{
  return "uav_control_interfaces::action::Flight_GetResult_Response";
}

template<>
inline const char * name<uav_control_interfaces::action::Flight_GetResult_Response>()
{
  return "uav_control_interfaces/action/Flight_GetResult_Response";
}

template<>
struct has_fixed_size<uav_control_interfaces::action::Flight_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<uav_control_interfaces::action::Flight_Result>::value> {};

template<>
struct has_bounded_size<uav_control_interfaces::action::Flight_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<uav_control_interfaces::action::Flight_Result>::value> {};

template<>
struct is_message<uav_control_interfaces::action::Flight_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uav_control_interfaces::action::Flight_GetResult>()
{
  return "uav_control_interfaces::action::Flight_GetResult";
}

template<>
inline const char * name<uav_control_interfaces::action::Flight_GetResult>()
{
  return "uav_control_interfaces/action/Flight_GetResult";
}

template<>
struct has_fixed_size<uav_control_interfaces::action::Flight_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<uav_control_interfaces::action::Flight_GetResult_Request>::value &&
    has_fixed_size<uav_control_interfaces::action::Flight_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<uav_control_interfaces::action::Flight_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<uav_control_interfaces::action::Flight_GetResult_Request>::value &&
    has_bounded_size<uav_control_interfaces::action::Flight_GetResult_Response>::value
  >
{
};

template<>
struct is_service<uav_control_interfaces::action::Flight_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<uav_control_interfaces::action::Flight_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uav_control_interfaces::action::Flight_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "uav_control_interfaces/action/detail/flight__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uav_control_interfaces::action::Flight_FeedbackMessage>()
{
  return "uav_control_interfaces::action::Flight_FeedbackMessage";
}

template<>
inline const char * name<uav_control_interfaces::action::Flight_FeedbackMessage>()
{
  return "uav_control_interfaces/action/Flight_FeedbackMessage";
}

template<>
struct has_fixed_size<uav_control_interfaces::action::Flight_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<uav_control_interfaces::action::Flight_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<uav_control_interfaces::action::Flight_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<uav_control_interfaces::action::Flight_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<uav_control_interfaces::action::Flight_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<uav_control_interfaces::action::Flight>
  : std::true_type
{
};

template<>
struct is_action_goal<uav_control_interfaces::action::Flight_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<uav_control_interfaces::action::Flight_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<uav_control_interfaces::action::Flight_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__TRAITS_HPP_
