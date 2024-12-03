// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uav_control_interfaces:action/Flight.idl
// generated code does not contain a copyright notice

#ifndef UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__STRUCT_H_
#define UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Flight in the package uav_control_interfaces.
typedef struct uav_control_interfaces__action__Flight_Goal
{
  float altitude;
} uav_control_interfaces__action__Flight_Goal;

// Struct for a sequence of uav_control_interfaces__action__Flight_Goal.
typedef struct uav_control_interfaces__action__Flight_Goal__Sequence
{
  uav_control_interfaces__action__Flight_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uav_control_interfaces__action__Flight_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Flight in the package uav_control_interfaces.
typedef struct uav_control_interfaces__action__Flight_Result
{
  float current_altitude;
} uav_control_interfaces__action__Flight_Result;

// Struct for a sequence of uav_control_interfaces__action__Flight_Result.
typedef struct uav_control_interfaces__action__Flight_Result__Sequence
{
  uav_control_interfaces__action__Flight_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uav_control_interfaces__action__Flight_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/Flight in the package uav_control_interfaces.
typedef struct uav_control_interfaces__action__Flight_Feedback
{
  rosidl_runtime_c__String status;
} uav_control_interfaces__action__Flight_Feedback;

// Struct for a sequence of uav_control_interfaces__action__Flight_Feedback.
typedef struct uav_control_interfaces__action__Flight_Feedback__Sequence
{
  uav_control_interfaces__action__Flight_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uav_control_interfaces__action__Flight_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "uav_control_interfaces/action/detail/flight__struct.h"

// Struct defined in action/Flight in the package uav_control_interfaces.
typedef struct uav_control_interfaces__action__Flight_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  uav_control_interfaces__action__Flight_Goal goal;
} uav_control_interfaces__action__Flight_SendGoal_Request;

// Struct for a sequence of uav_control_interfaces__action__Flight_SendGoal_Request.
typedef struct uav_control_interfaces__action__Flight_SendGoal_Request__Sequence
{
  uav_control_interfaces__action__Flight_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uav_control_interfaces__action__Flight_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Flight in the package uav_control_interfaces.
typedef struct uav_control_interfaces__action__Flight_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} uav_control_interfaces__action__Flight_SendGoal_Response;

// Struct for a sequence of uav_control_interfaces__action__Flight_SendGoal_Response.
typedef struct uav_control_interfaces__action__Flight_SendGoal_Response__Sequence
{
  uav_control_interfaces__action__Flight_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uav_control_interfaces__action__Flight_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Flight in the package uav_control_interfaces.
typedef struct uav_control_interfaces__action__Flight_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} uav_control_interfaces__action__Flight_GetResult_Request;

// Struct for a sequence of uav_control_interfaces__action__Flight_GetResult_Request.
typedef struct uav_control_interfaces__action__Flight_GetResult_Request__Sequence
{
  uav_control_interfaces__action__Flight_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uav_control_interfaces__action__Flight_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"

// Struct defined in action/Flight in the package uav_control_interfaces.
typedef struct uav_control_interfaces__action__Flight_GetResult_Response
{
  int8_t status;
  uav_control_interfaces__action__Flight_Result result;
} uav_control_interfaces__action__Flight_GetResult_Response;

// Struct for a sequence of uav_control_interfaces__action__Flight_GetResult_Response.
typedef struct uav_control_interfaces__action__Flight_GetResult_Response__Sequence
{
  uav_control_interfaces__action__Flight_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uav_control_interfaces__action__Flight_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"

// Struct defined in action/Flight in the package uav_control_interfaces.
typedef struct uav_control_interfaces__action__Flight_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  uav_control_interfaces__action__Flight_Feedback feedback;
} uav_control_interfaces__action__Flight_FeedbackMessage;

// Struct for a sequence of uav_control_interfaces__action__Flight_FeedbackMessage.
typedef struct uav_control_interfaces__action__Flight_FeedbackMessage__Sequence
{
  uav_control_interfaces__action__Flight_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uav_control_interfaces__action__Flight_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__STRUCT_H_
