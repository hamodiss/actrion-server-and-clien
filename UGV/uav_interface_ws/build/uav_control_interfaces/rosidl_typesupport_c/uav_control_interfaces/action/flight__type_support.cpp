// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from uav_control_interfaces:action/Flight.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "uav_control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "uav_control_interfaces/action/detail/flight__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace uav_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Flight_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Flight_Goal_type_support_ids_t;

static const _Flight_Goal_type_support_ids_t _Flight_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Flight_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Flight_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Flight_Goal_type_support_symbol_names_t _Flight_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uav_control_interfaces, action, Flight_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_Goal)),
  }
};

typedef struct _Flight_Goal_type_support_data_t
{
  void * data[2];
} _Flight_Goal_type_support_data_t;

static _Flight_Goal_type_support_data_t _Flight_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Flight_Goal_message_typesupport_map = {
  2,
  "uav_control_interfaces",
  &_Flight_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Flight_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Flight_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Flight_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Flight_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uav_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uav_control_interfaces, action, Flight_Goal)() {
  return &::uav_control_interfaces::action::rosidl_typesupport_c::Flight_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uav_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Flight_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Flight_Result_type_support_ids_t;

static const _Flight_Result_type_support_ids_t _Flight_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Flight_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Flight_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Flight_Result_type_support_symbol_names_t _Flight_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uav_control_interfaces, action, Flight_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_Result)),
  }
};

typedef struct _Flight_Result_type_support_data_t
{
  void * data[2];
} _Flight_Result_type_support_data_t;

static _Flight_Result_type_support_data_t _Flight_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Flight_Result_message_typesupport_map = {
  2,
  "uav_control_interfaces",
  &_Flight_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Flight_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Flight_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Flight_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Flight_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uav_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uav_control_interfaces, action, Flight_Result)() {
  return &::uav_control_interfaces::action::rosidl_typesupport_c::Flight_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uav_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Flight_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Flight_Feedback_type_support_ids_t;

static const _Flight_Feedback_type_support_ids_t _Flight_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Flight_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Flight_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Flight_Feedback_type_support_symbol_names_t _Flight_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uav_control_interfaces, action, Flight_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_Feedback)),
  }
};

typedef struct _Flight_Feedback_type_support_data_t
{
  void * data[2];
} _Flight_Feedback_type_support_data_t;

static _Flight_Feedback_type_support_data_t _Flight_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Flight_Feedback_message_typesupport_map = {
  2,
  "uav_control_interfaces",
  &_Flight_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Flight_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Flight_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Flight_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Flight_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uav_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uav_control_interfaces, action, Flight_Feedback)() {
  return &::uav_control_interfaces::action::rosidl_typesupport_c::Flight_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uav_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Flight_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Flight_SendGoal_Request_type_support_ids_t;

static const _Flight_SendGoal_Request_type_support_ids_t _Flight_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Flight_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Flight_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Flight_SendGoal_Request_type_support_symbol_names_t _Flight_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uav_control_interfaces, action, Flight_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_SendGoal_Request)),
  }
};

typedef struct _Flight_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Flight_SendGoal_Request_type_support_data_t;

static _Flight_SendGoal_Request_type_support_data_t _Flight_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Flight_SendGoal_Request_message_typesupport_map = {
  2,
  "uav_control_interfaces",
  &_Flight_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Flight_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Flight_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Flight_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Flight_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uav_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uav_control_interfaces, action, Flight_SendGoal_Request)() {
  return &::uav_control_interfaces::action::rosidl_typesupport_c::Flight_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uav_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Flight_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Flight_SendGoal_Response_type_support_ids_t;

static const _Flight_SendGoal_Response_type_support_ids_t _Flight_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Flight_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Flight_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Flight_SendGoal_Response_type_support_symbol_names_t _Flight_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uav_control_interfaces, action, Flight_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_SendGoal_Response)),
  }
};

typedef struct _Flight_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Flight_SendGoal_Response_type_support_data_t;

static _Flight_SendGoal_Response_type_support_data_t _Flight_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Flight_SendGoal_Response_message_typesupport_map = {
  2,
  "uav_control_interfaces",
  &_Flight_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Flight_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Flight_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Flight_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Flight_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uav_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uav_control_interfaces, action, Flight_SendGoal_Response)() {
  return &::uav_control_interfaces::action::rosidl_typesupport_c::Flight_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uav_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Flight_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Flight_SendGoal_type_support_ids_t;

static const _Flight_SendGoal_type_support_ids_t _Flight_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Flight_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Flight_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Flight_SendGoal_type_support_symbol_names_t _Flight_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uav_control_interfaces, action, Flight_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_SendGoal)),
  }
};

typedef struct _Flight_SendGoal_type_support_data_t
{
  void * data[2];
} _Flight_SendGoal_type_support_data_t;

static _Flight_SendGoal_type_support_data_t _Flight_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Flight_SendGoal_service_typesupport_map = {
  2,
  "uav_control_interfaces",
  &_Flight_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Flight_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Flight_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Flight_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Flight_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uav_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uav_control_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, uav_control_interfaces, action, Flight_SendGoal)() {
  return &::uav_control_interfaces::action::rosidl_typesupport_c::Flight_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uav_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Flight_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Flight_GetResult_Request_type_support_ids_t;

static const _Flight_GetResult_Request_type_support_ids_t _Flight_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Flight_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Flight_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Flight_GetResult_Request_type_support_symbol_names_t _Flight_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uav_control_interfaces, action, Flight_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_GetResult_Request)),
  }
};

typedef struct _Flight_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Flight_GetResult_Request_type_support_data_t;

static _Flight_GetResult_Request_type_support_data_t _Flight_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Flight_GetResult_Request_message_typesupport_map = {
  2,
  "uav_control_interfaces",
  &_Flight_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Flight_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Flight_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Flight_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Flight_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uav_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uav_control_interfaces, action, Flight_GetResult_Request)() {
  return &::uav_control_interfaces::action::rosidl_typesupport_c::Flight_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uav_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Flight_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Flight_GetResult_Response_type_support_ids_t;

static const _Flight_GetResult_Response_type_support_ids_t _Flight_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Flight_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Flight_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Flight_GetResult_Response_type_support_symbol_names_t _Flight_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uav_control_interfaces, action, Flight_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_GetResult_Response)),
  }
};

typedef struct _Flight_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Flight_GetResult_Response_type_support_data_t;

static _Flight_GetResult_Response_type_support_data_t _Flight_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Flight_GetResult_Response_message_typesupport_map = {
  2,
  "uav_control_interfaces",
  &_Flight_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Flight_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Flight_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Flight_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Flight_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uav_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uav_control_interfaces, action, Flight_GetResult_Response)() {
  return &::uav_control_interfaces::action::rosidl_typesupport_c::Flight_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uav_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Flight_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Flight_GetResult_type_support_ids_t;

static const _Flight_GetResult_type_support_ids_t _Flight_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Flight_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Flight_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Flight_GetResult_type_support_symbol_names_t _Flight_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uav_control_interfaces, action, Flight_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_GetResult)),
  }
};

typedef struct _Flight_GetResult_type_support_data_t
{
  void * data[2];
} _Flight_GetResult_type_support_data_t;

static _Flight_GetResult_type_support_data_t _Flight_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Flight_GetResult_service_typesupport_map = {
  2,
  "uav_control_interfaces",
  &_Flight_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Flight_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Flight_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Flight_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Flight_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uav_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uav_control_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, uav_control_interfaces, action, Flight_GetResult)() {
  return &::uav_control_interfaces::action::rosidl_typesupport_c::Flight_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uav_control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uav_control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Flight_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Flight_FeedbackMessage_type_support_ids_t;

static const _Flight_FeedbackMessage_type_support_ids_t _Flight_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Flight_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Flight_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Flight_FeedbackMessage_type_support_symbol_names_t _Flight_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uav_control_interfaces, action, Flight_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uav_control_interfaces, action, Flight_FeedbackMessage)),
  }
};

typedef struct _Flight_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Flight_FeedbackMessage_type_support_data_t;

static _Flight_FeedbackMessage_type_support_data_t _Flight_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Flight_FeedbackMessage_message_typesupport_map = {
  2,
  "uav_control_interfaces",
  &_Flight_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Flight_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Flight_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Flight_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Flight_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uav_control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uav_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uav_control_interfaces, action, Flight_FeedbackMessage)() {
  return &::uav_control_interfaces::action::rosidl_typesupport_c::Flight_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "uav_control_interfaces/action/flight.h"
#include "uav_control_interfaces/action/detail/flight__type_support.h"

static rosidl_action_type_support_t _uav_control_interfaces__action__Flight__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uav_control_interfaces
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, uav_control_interfaces, action, Flight)()
{
  // Thread-safe by always writing the same values to the static struct
  _uav_control_interfaces__action__Flight__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, uav_control_interfaces, action, Flight_SendGoal)();
  _uav_control_interfaces__action__Flight__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, uav_control_interfaces, action, Flight_GetResult)();
  _uav_control_interfaces__action__Flight__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _uav_control_interfaces__action__Flight__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, uav_control_interfaces, action, Flight_FeedbackMessage)();
  _uav_control_interfaces__action__Flight__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_uav_control_interfaces__action__Flight__typesupport_c;
}

#ifdef __cplusplus
}
#endif
