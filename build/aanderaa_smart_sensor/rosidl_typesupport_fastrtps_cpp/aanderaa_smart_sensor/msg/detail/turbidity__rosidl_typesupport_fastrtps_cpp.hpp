// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from aanderaa_smart_sensor:msg/Turbidity.idl
// generated code does not contain a copyright notice

#ifndef AANDERAA_SMART_SENSOR__MSG__DETAIL__TURBIDITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AANDERAA_SMART_SENSOR__MSG__DETAIL__TURBIDITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "aanderaa_smart_sensor/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "aanderaa_smart_sensor/msg/detail/turbidity__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace aanderaa_smart_sensor
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aanderaa_smart_sensor
cdr_serialize(
  const aanderaa_smart_sensor::msg::Turbidity & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aanderaa_smart_sensor
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aanderaa_smart_sensor::msg::Turbidity & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aanderaa_smart_sensor
get_serialized_size(
  const aanderaa_smart_sensor::msg::Turbidity & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aanderaa_smart_sensor
max_serialized_size_Turbidity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aanderaa_smart_sensor
cdr_serialize_key(
  const aanderaa_smart_sensor::msg::Turbidity & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aanderaa_smart_sensor
get_serialized_size_key(
  const aanderaa_smart_sensor::msg::Turbidity & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aanderaa_smart_sensor
max_serialized_size_key_Turbidity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aanderaa_smart_sensor
has_buffer_fields_Turbidity();

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace aanderaa_smart_sensor

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aanderaa_smart_sensor
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aanderaa_smart_sensor, msg, Turbidity)();

#ifdef __cplusplus
}
#endif

#endif  // AANDERAA_SMART_SENSOR__MSG__DETAIL__TURBIDITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
