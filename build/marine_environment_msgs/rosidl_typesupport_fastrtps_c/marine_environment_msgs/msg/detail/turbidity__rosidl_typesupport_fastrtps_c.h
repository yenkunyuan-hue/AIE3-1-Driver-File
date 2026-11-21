// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from marine_environment_msgs:msg/Turbidity.idl
// generated code does not contain a copyright notice
#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__TURBIDITY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__TURBIDITY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "marine_environment_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marine_environment_msgs/msg/detail/turbidity__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool cdr_serialize_marine_environment_msgs__msg__Turbidity(
  const marine_environment_msgs__msg__Turbidity * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool cdr_deserialize_marine_environment_msgs__msg__Turbidity(
  eprosima::fastcdr::Cdr &,
  marine_environment_msgs__msg__Turbidity * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
size_t get_serialized_size_marine_environment_msgs__msg__Turbidity(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
size_t max_serialized_size_marine_environment_msgs__msg__Turbidity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool cdr_serialize_key_marine_environment_msgs__msg__Turbidity(
  const marine_environment_msgs__msg__Turbidity * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
size_t get_serialized_size_key_marine_environment_msgs__msg__Turbidity(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
size_t max_serialized_size_key_marine_environment_msgs__msg__Turbidity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool has_buffer_fields_marine_environment_msgs__msg__Turbidity();

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marine_environment_msgs, msg, Turbidity)();

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__TURBIDITY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
