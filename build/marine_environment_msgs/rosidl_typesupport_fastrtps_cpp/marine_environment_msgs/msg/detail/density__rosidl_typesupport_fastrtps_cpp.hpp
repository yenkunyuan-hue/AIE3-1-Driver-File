// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from marine_environment_msgs:msg/Density.idl
// generated code does not contain a copyright notice

#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__DENSITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__DENSITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "marine_environment_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "marine_environment_msgs/msg/detail/density__struct.hpp"

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

namespace marine_environment_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
cdr_serialize(
  const marine_environment_msgs::msg::Density & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  marine_environment_msgs::msg::Density & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
get_serialized_size(
  const marine_environment_msgs::msg::Density & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
max_serialized_size_Density(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
cdr_serialize_key(
  const marine_environment_msgs::msg::Density & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
get_serialized_size_key(
  const marine_environment_msgs::msg::Density & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
max_serialized_size_key_Density(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
has_buffer_fields_Density();

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace marine_environment_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, marine_environment_msgs, msg, Density)();

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__DENSITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
