// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from aanderaa_smart_sensor:msg/Turbidity.idl
// generated code does not contain a copyright notice
#ifndef AANDERAA_SMART_SENSOR__MSG__DETAIL__TURBIDITY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define AANDERAA_SMART_SENSOR__MSG__DETAIL__TURBIDITY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "aanderaa_smart_sensor/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aanderaa_smart_sensor/msg/detail/turbidity__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aanderaa_smart_sensor
bool cdr_serialize_aanderaa_smart_sensor__msg__Turbidity(
  const aanderaa_smart_sensor__msg__Turbidity * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aanderaa_smart_sensor
bool cdr_deserialize_aanderaa_smart_sensor__msg__Turbidity(
  eprosima::fastcdr::Cdr &,
  aanderaa_smart_sensor__msg__Turbidity * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aanderaa_smart_sensor
size_t get_serialized_size_aanderaa_smart_sensor__msg__Turbidity(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aanderaa_smart_sensor
size_t max_serialized_size_aanderaa_smart_sensor__msg__Turbidity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aanderaa_smart_sensor
bool cdr_serialize_key_aanderaa_smart_sensor__msg__Turbidity(
  const aanderaa_smart_sensor__msg__Turbidity * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aanderaa_smart_sensor
size_t get_serialized_size_key_aanderaa_smart_sensor__msg__Turbidity(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aanderaa_smart_sensor
size_t max_serialized_size_key_aanderaa_smart_sensor__msg__Turbidity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aanderaa_smart_sensor
bool has_buffer_fields_aanderaa_smart_sensor__msg__Turbidity();

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aanderaa_smart_sensor
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aanderaa_smart_sensor, msg, Turbidity)();

#ifdef __cplusplus
}
#endif

#endif  // AANDERAA_SMART_SENSOR__MSG__DETAIL__TURBIDITY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
