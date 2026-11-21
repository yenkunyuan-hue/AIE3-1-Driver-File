// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from marine_acoustic_msgs:msg/SonarDetections.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "marine_acoustic_msgs/msg/detail/sonar_detections__functions.h"
#include "marine_acoustic_msgs/msg/detail/sonar_detections__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace marine_acoustic_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _SonarDetections_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SonarDetections_type_support_ids_t;

static const _SonarDetections_type_support_ids_t _SonarDetections_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SonarDetections_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SonarDetections_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SonarDetections_type_support_symbol_names_t _SonarDetections_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, marine_acoustic_msgs, msg, SonarDetections)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marine_acoustic_msgs, msg, SonarDetections)),
  }
};

typedef struct _SonarDetections_type_support_data_t
{
  void * data[2];
} _SonarDetections_type_support_data_t;

static _SonarDetections_type_support_data_t _SonarDetections_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SonarDetections_message_typesupport_map = {
  2,
  "marine_acoustic_msgs",
  &_SonarDetections_message_typesupport_ids.typesupport_identifier[0],
  &_SonarDetections_message_typesupport_symbol_names.symbol_name[0],
  &_SonarDetections_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SonarDetections_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SonarDetections_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__SonarDetections__get_type_hash,
  &marine_acoustic_msgs__msg__SonarDetections__get_type_description,
  &marine_acoustic_msgs__msg__SonarDetections__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace marine_acoustic_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<marine_acoustic_msgs::msg::SonarDetections>()
{
  return &::marine_acoustic_msgs::msg::rosidl_typesupport_cpp::SonarDetections_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, marine_acoustic_msgs, msg, SonarDetections)() {
  return get_message_type_support_handle<marine_acoustic_msgs::msg::SonarDetections>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
