// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uav_control_interfaces:action/Flight.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uav_control_interfaces/action/detail/flight__rosidl_typesupport_introspection_c.h"
#include "uav_control_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uav_control_interfaces/action/detail/flight__functions.h"
#include "uav_control_interfaces/action/detail/flight__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Flight_Goal__rosidl_typesupport_introspection_c__Flight_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uav_control_interfaces__action__Flight_Goal__init(message_memory);
}

void Flight_Goal__rosidl_typesupport_introspection_c__Flight_Goal_fini_function(void * message_memory)
{
  uav_control_interfaces__action__Flight_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Flight_Goal__rosidl_typesupport_introspection_c__Flight_Goal_message_member_array[1] = {
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uav_control_interfaces__action__Flight_Goal, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Flight_Goal__rosidl_typesupport_introspection_c__Flight_Goal_message_members = {
  "uav_control_interfaces__action",  // message namespace
  "Flight_Goal",  // message name
  1,  // number of fields
  sizeof(uav_control_interfaces__action__Flight_Goal),
  Flight_Goal__rosidl_typesupport_introspection_c__Flight_Goal_message_member_array,  // message members
  Flight_Goal__rosidl_typesupport_introspection_c__Flight_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Flight_Goal__rosidl_typesupport_introspection_c__Flight_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Flight_Goal__rosidl_typesupport_introspection_c__Flight_Goal_message_type_support_handle = {
  0,
  &Flight_Goal__rosidl_typesupport_introspection_c__Flight_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_Goal)() {
  if (!Flight_Goal__rosidl_typesupport_introspection_c__Flight_Goal_message_type_support_handle.typesupport_identifier) {
    Flight_Goal__rosidl_typesupport_introspection_c__Flight_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Flight_Goal__rosidl_typesupport_introspection_c__Flight_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uav_control_interfaces/action/detail/flight__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__functions.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Flight_Result__rosidl_typesupport_introspection_c__Flight_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uav_control_interfaces__action__Flight_Result__init(message_memory);
}

void Flight_Result__rosidl_typesupport_introspection_c__Flight_Result_fini_function(void * message_memory)
{
  uav_control_interfaces__action__Flight_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Flight_Result__rosidl_typesupport_introspection_c__Flight_Result_message_member_array[1] = {
  {
    "current_altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uav_control_interfaces__action__Flight_Result, current_altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Flight_Result__rosidl_typesupport_introspection_c__Flight_Result_message_members = {
  "uav_control_interfaces__action",  // message namespace
  "Flight_Result",  // message name
  1,  // number of fields
  sizeof(uav_control_interfaces__action__Flight_Result),
  Flight_Result__rosidl_typesupport_introspection_c__Flight_Result_message_member_array,  // message members
  Flight_Result__rosidl_typesupport_introspection_c__Flight_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Flight_Result__rosidl_typesupport_introspection_c__Flight_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Flight_Result__rosidl_typesupport_introspection_c__Flight_Result_message_type_support_handle = {
  0,
  &Flight_Result__rosidl_typesupport_introspection_c__Flight_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_Result)() {
  if (!Flight_Result__rosidl_typesupport_introspection_c__Flight_Result_message_type_support_handle.typesupport_identifier) {
    Flight_Result__rosidl_typesupport_introspection_c__Flight_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Flight_Result__rosidl_typesupport_introspection_c__Flight_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uav_control_interfaces/action/detail/flight__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__functions.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Flight_Feedback__rosidl_typesupport_introspection_c__Flight_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uav_control_interfaces__action__Flight_Feedback__init(message_memory);
}

void Flight_Feedback__rosidl_typesupport_introspection_c__Flight_Feedback_fini_function(void * message_memory)
{
  uav_control_interfaces__action__Flight_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Flight_Feedback__rosidl_typesupport_introspection_c__Flight_Feedback_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uav_control_interfaces__action__Flight_Feedback, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Flight_Feedback__rosidl_typesupport_introspection_c__Flight_Feedback_message_members = {
  "uav_control_interfaces__action",  // message namespace
  "Flight_Feedback",  // message name
  1,  // number of fields
  sizeof(uav_control_interfaces__action__Flight_Feedback),
  Flight_Feedback__rosidl_typesupport_introspection_c__Flight_Feedback_message_member_array,  // message members
  Flight_Feedback__rosidl_typesupport_introspection_c__Flight_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Flight_Feedback__rosidl_typesupport_introspection_c__Flight_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Flight_Feedback__rosidl_typesupport_introspection_c__Flight_Feedback_message_type_support_handle = {
  0,
  &Flight_Feedback__rosidl_typesupport_introspection_c__Flight_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_Feedback)() {
  if (!Flight_Feedback__rosidl_typesupport_introspection_c__Flight_Feedback_message_type_support_handle.typesupport_identifier) {
    Flight_Feedback__rosidl_typesupport_introspection_c__Flight_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Flight_Feedback__rosidl_typesupport_introspection_c__Flight_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uav_control_interfaces/action/detail/flight__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__functions.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "uav_control_interfaces/action/flight.h"
// Member `goal`
// already included above
// #include "uav_control_interfaces/action/detail/flight__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uav_control_interfaces__action__Flight_SendGoal_Request__init(message_memory);
}

void Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_fini_function(void * message_memory)
{
  uav_control_interfaces__action__Flight_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uav_control_interfaces__action__Flight_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uav_control_interfaces__action__Flight_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_message_members = {
  "uav_control_interfaces__action",  // message namespace
  "Flight_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(uav_control_interfaces__action__Flight_SendGoal_Request),
  Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_message_member_array,  // message members
  Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_message_type_support_handle = {
  0,
  &Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_SendGoal_Request)() {
  Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_Goal)();
  if (!Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Flight_SendGoal_Request__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uav_control_interfaces/action/detail/flight__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__functions.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Flight_SendGoal_Response__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uav_control_interfaces__action__Flight_SendGoal_Response__init(message_memory);
}

void Flight_SendGoal_Response__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_fini_function(void * message_memory)
{
  uav_control_interfaces__action__Flight_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Flight_SendGoal_Response__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uav_control_interfaces__action__Flight_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uav_control_interfaces__action__Flight_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Flight_SendGoal_Response__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_message_members = {
  "uav_control_interfaces__action",  // message namespace
  "Flight_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(uav_control_interfaces__action__Flight_SendGoal_Response),
  Flight_SendGoal_Response__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_message_member_array,  // message members
  Flight_SendGoal_Response__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Flight_SendGoal_Response__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Flight_SendGoal_Response__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_message_type_support_handle = {
  0,
  &Flight_SendGoal_Response__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_SendGoal_Response)() {
  Flight_SendGoal_Response__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Flight_SendGoal_Response__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Flight_SendGoal_Response__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Flight_SendGoal_Response__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_SendGoal_service_members = {
  "uav_control_interfaces__action",  // service namespace
  "Flight_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_SendGoal_service_type_support_handle = {
  0,
  &uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uav_control_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_SendGoal)() {
  if (!uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_SendGoal_service_type_support_handle.typesupport_identifier) {
    uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_SendGoal_Response)()->data;
  }

  return &uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "uav_control_interfaces/action/detail/flight__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__functions.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Flight_GetResult_Request__rosidl_typesupport_introspection_c__Flight_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uav_control_interfaces__action__Flight_GetResult_Request__init(message_memory);
}

void Flight_GetResult_Request__rosidl_typesupport_introspection_c__Flight_GetResult_Request_fini_function(void * message_memory)
{
  uav_control_interfaces__action__Flight_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Flight_GetResult_Request__rosidl_typesupport_introspection_c__Flight_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uav_control_interfaces__action__Flight_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Flight_GetResult_Request__rosidl_typesupport_introspection_c__Flight_GetResult_Request_message_members = {
  "uav_control_interfaces__action",  // message namespace
  "Flight_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(uav_control_interfaces__action__Flight_GetResult_Request),
  Flight_GetResult_Request__rosidl_typesupport_introspection_c__Flight_GetResult_Request_message_member_array,  // message members
  Flight_GetResult_Request__rosidl_typesupport_introspection_c__Flight_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Flight_GetResult_Request__rosidl_typesupport_introspection_c__Flight_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Flight_GetResult_Request__rosidl_typesupport_introspection_c__Flight_GetResult_Request_message_type_support_handle = {
  0,
  &Flight_GetResult_Request__rosidl_typesupport_introspection_c__Flight_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_GetResult_Request)() {
  Flight_GetResult_Request__rosidl_typesupport_introspection_c__Flight_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Flight_GetResult_Request__rosidl_typesupport_introspection_c__Flight_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Flight_GetResult_Request__rosidl_typesupport_introspection_c__Flight_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Flight_GetResult_Request__rosidl_typesupport_introspection_c__Flight_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uav_control_interfaces/action/detail/flight__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__functions.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "uav_control_interfaces/action/flight.h"
// Member `result`
// already included above
// #include "uav_control_interfaces/action/detail/flight__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Flight_GetResult_Response__rosidl_typesupport_introspection_c__Flight_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uav_control_interfaces__action__Flight_GetResult_Response__init(message_memory);
}

void Flight_GetResult_Response__rosidl_typesupport_introspection_c__Flight_GetResult_Response_fini_function(void * message_memory)
{
  uav_control_interfaces__action__Flight_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Flight_GetResult_Response__rosidl_typesupport_introspection_c__Flight_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uav_control_interfaces__action__Flight_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uav_control_interfaces__action__Flight_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Flight_GetResult_Response__rosidl_typesupport_introspection_c__Flight_GetResult_Response_message_members = {
  "uav_control_interfaces__action",  // message namespace
  "Flight_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(uav_control_interfaces__action__Flight_GetResult_Response),
  Flight_GetResult_Response__rosidl_typesupport_introspection_c__Flight_GetResult_Response_message_member_array,  // message members
  Flight_GetResult_Response__rosidl_typesupport_introspection_c__Flight_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Flight_GetResult_Response__rosidl_typesupport_introspection_c__Flight_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Flight_GetResult_Response__rosidl_typesupport_introspection_c__Flight_GetResult_Response_message_type_support_handle = {
  0,
  &Flight_GetResult_Response__rosidl_typesupport_introspection_c__Flight_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_GetResult_Response)() {
  Flight_GetResult_Response__rosidl_typesupport_introspection_c__Flight_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_Result)();
  if (!Flight_GetResult_Response__rosidl_typesupport_introspection_c__Flight_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Flight_GetResult_Response__rosidl_typesupport_introspection_c__Flight_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Flight_GetResult_Response__rosidl_typesupport_introspection_c__Flight_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_GetResult_service_members = {
  "uav_control_interfaces__action",  // service namespace
  "Flight_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_GetResult_service_type_support_handle = {
  0,
  &uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uav_control_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_GetResult)() {
  if (!uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_GetResult_service_type_support_handle.typesupport_identifier) {
    uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_GetResult_Response)()->data;
  }

  return &uav_control_interfaces__action__detail__flight__rosidl_typesupport_introspection_c__Flight_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "uav_control_interfaces/action/detail/flight__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__functions.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "uav_control_interfaces/action/flight.h"
// Member `feedback`
// already included above
// #include "uav_control_interfaces/action/detail/flight__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uav_control_interfaces__action__Flight_FeedbackMessage__init(message_memory);
}

void Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_fini_function(void * message_memory)
{
  uav_control_interfaces__action__Flight_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uav_control_interfaces__action__Flight_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uav_control_interfaces__action__Flight_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_message_members = {
  "uav_control_interfaces__action",  // message namespace
  "Flight_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(uav_control_interfaces__action__Flight_FeedbackMessage),
  Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_message_member_array,  // message members
  Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_message_type_support_handle = {
  0,
  &Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_FeedbackMessage)() {
  Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_Feedback)();
  if (!Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Flight_FeedbackMessage__rosidl_typesupport_introspection_c__Flight_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
