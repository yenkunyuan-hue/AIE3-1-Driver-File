// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marine_acoustic_msgs:msg/Dvl.idl
// generated code does not contain a copyright notice
#include "marine_acoustic_msgs/msg/detail/dvl__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marine_acoustic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marine_acoustic_msgs/msg/detail/dvl__struct.h"
#include "marine_acoustic_msgs/msg/detail/dvl__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/vector3__functions.h"  // beam_unit_vec, velocity
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
bool cdr_serialize_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
bool cdr_deserialize_geometry_msgs__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Vector3 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
bool cdr_serialize_key_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
bool cdr_serialize_with_endpoint_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
bool cdr_deserialize_with_endpoint_geometry_msgs__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Vector3 * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
bool has_buffer_fields_geometry_msgs__msg__Vector3();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
bool cdr_serialize_with_endpoint_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
bool cdr_deserialize_with_endpoint_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_acoustic_msgs
bool has_buffer_fields_std_msgs__msg__Header();


using _Dvl__ros_msg_type = marine_acoustic_msgs__msg__Dvl;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_marine_acoustic_msgs__msg__Dvl(
  const marine_acoustic_msgs__msg__Dvl * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: velocity_mode
  {
    cdr << ros_message->velocity_mode;
  }

  // Field name: dvl_type
  {
    cdr << ros_message->dvl_type;
  }

  // Field name: velocity
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->velocity, cdr);
  }

  // Field name: velocity_covar
  {
    size_t size = 9;
    auto array_ptr = ros_message->velocity_covar;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: altitude
  {
    cdr << ros_message->altitude;
  }

  // Field name: course_gnd
  {
    cdr << ros_message->course_gnd;
  }

  // Field name: speed_gnd
  {
    cdr << ros_message->speed_gnd;
  }

  // Field name: num_good_beams
  {
    cdr << ros_message->num_good_beams;
  }

  // Field name: sound_speed
  {
    cdr << ros_message->sound_speed;
  }

  // Field name: beam_ranges_valid
  {
    cdr << (ros_message->beam_ranges_valid ? true : false);
  }

  // Field name: beam_velocities_valid
  {
    cdr << (ros_message->beam_velocities_valid ? true : false);
  }

  // Field name: beam_unit_vec
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_unit_vec;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Vector3(
        &array_ptr[i], cdr);
    }
  }

  // Field name: range
  {
    size_t size = 4;
    auto array_ptr = ros_message->range;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: range_covar
  {
    size_t size = 4;
    auto array_ptr = ros_message->range_covar;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: beam_quality
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_quality;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: beam_velocity
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_velocity;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: beam_velocity_covar
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_velocity_covar;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_deserialize_marine_acoustic_msgs__msg__Dvl(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__Dvl * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: velocity_mode
  {
    cdr >> ros_message->velocity_mode;
  }

  // Field name: dvl_type
  {
    cdr >> ros_message->dvl_type;
  }

  // Field name: velocity
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->velocity);
  }

  // Field name: velocity_covar
  {
    size_t size = 9;
    auto array_ptr = ros_message->velocity_covar;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: altitude
  {
    cdr >> ros_message->altitude;
  }

  // Field name: course_gnd
  {
    cdr >> ros_message->course_gnd;
  }

  // Field name: speed_gnd
  {
    cdr >> ros_message->speed_gnd;
  }

  // Field name: num_good_beams
  {
    cdr >> ros_message->num_good_beams;
  }

  // Field name: sound_speed
  {
    cdr >> ros_message->sound_speed;
  }

  // Field name: beam_ranges_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beam_ranges_valid = tmp ? true : false;
  }

  // Field name: beam_velocities_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beam_velocities_valid = tmp ? true : false;
  }

  // Field name: beam_unit_vec
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_unit_vec;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &array_ptr[i]);
    }
  }

  // Field name: range
  {
    size_t size = 4;
    auto array_ptr = ros_message->range;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: range_covar
  {
    size_t size = 4;
    auto array_ptr = ros_message->range_covar;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: beam_quality
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_quality;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: beam_velocity
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_velocity;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: beam_velocity_covar
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_velocity_covar;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t get_serialized_size_marine_acoustic_msgs__msg__Dvl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Dvl__ros_msg_type * ros_message = static_cast<const _Dvl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: velocity_mode
  {
    size_t item_size = sizeof(ros_message->velocity_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dvl_type
  {
    size_t item_size = sizeof(ros_message->dvl_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->velocity), current_alignment);

  // Field name: velocity_covar
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->velocity_covar;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: altitude
  {
    size_t item_size = sizeof(ros_message->altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: course_gnd
  {
    size_t item_size = sizeof(ros_message->course_gnd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed_gnd
  {
    size_t item_size = sizeof(ros_message->speed_gnd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_good_beams
  {
    size_t item_size = sizeof(ros_message->num_good_beams);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sound_speed
  {
    size_t item_size = sizeof(ros_message->sound_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_ranges_valid
  {
    size_t item_size = sizeof(ros_message->beam_ranges_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_velocities_valid
  {
    size_t item_size = sizeof(ros_message->beam_velocities_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_unit_vec
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->beam_unit_vec;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: range
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->range;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: range_covar
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->range_covar;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_quality
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->beam_quality;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_velocity
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->beam_velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_velocity_covar
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->beam_velocity_covar;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t max_serialized_size_marine_acoustic_msgs__msg__Dvl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: velocity_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dvl_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: velocity_covar
  {
    size_t array_size = 9;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: course_gnd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: speed_gnd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: num_good_beams
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sound_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: beam_ranges_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: beam_velocities_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: beam_unit_vec
  {
    size_t array_size = 4;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: range
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: range_covar
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: beam_quality
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: beam_velocity
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: beam_velocity_covar
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_acoustic_msgs__msg__Dvl;
    is_plain =
      (
      offsetof(DataType, beam_velocity_covar) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_key_marine_acoustic_msgs__msg__Dvl(
  const marine_acoustic_msgs__msg__Dvl * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: velocity_mode
  {
    cdr << ros_message->velocity_mode;
  }

  // Field name: dvl_type
  {
    cdr << ros_message->dvl_type;
  }

  // Field name: velocity
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->velocity, cdr);
  }

  // Field name: velocity_covar
  {
    size_t size = 9;
    auto array_ptr = ros_message->velocity_covar;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: altitude
  {
    cdr << ros_message->altitude;
  }

  // Field name: course_gnd
  {
    cdr << ros_message->course_gnd;
  }

  // Field name: speed_gnd
  {
    cdr << ros_message->speed_gnd;
  }

  // Field name: num_good_beams
  {
    cdr << ros_message->num_good_beams;
  }

  // Field name: sound_speed
  {
    cdr << ros_message->sound_speed;
  }

  // Field name: beam_ranges_valid
  {
    cdr << (ros_message->beam_ranges_valid ? true : false);
  }

  // Field name: beam_velocities_valid
  {
    cdr << (ros_message->beam_velocities_valid ? true : false);
  }

  // Field name: beam_unit_vec
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_unit_vec;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Vector3(
        &array_ptr[i], cdr);
    }
  }

  // Field name: range
  {
    size_t size = 4;
    auto array_ptr = ros_message->range;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: range_covar
  {
    size_t size = 4;
    auto array_ptr = ros_message->range_covar;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: beam_quality
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_quality;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: beam_velocity
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_velocity;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: beam_velocity_covar
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_velocity_covar;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t get_serialized_size_key_marine_acoustic_msgs__msg__Dvl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Dvl__ros_msg_type * ros_message = static_cast<const _Dvl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: velocity_mode
  {
    size_t item_size = sizeof(ros_message->velocity_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dvl_type
  {
    size_t item_size = sizeof(ros_message->dvl_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->velocity), current_alignment);

  // Field name: velocity_covar
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->velocity_covar;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: altitude
  {
    size_t item_size = sizeof(ros_message->altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: course_gnd
  {
    size_t item_size = sizeof(ros_message->course_gnd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed_gnd
  {
    size_t item_size = sizeof(ros_message->speed_gnd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_good_beams
  {
    size_t item_size = sizeof(ros_message->num_good_beams);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sound_speed
  {
    size_t item_size = sizeof(ros_message->sound_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_ranges_valid
  {
    size_t item_size = sizeof(ros_message->beam_ranges_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_velocities_valid
  {
    size_t item_size = sizeof(ros_message->beam_velocities_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_unit_vec
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->beam_unit_vec;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: range
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->range;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: range_covar
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->range_covar;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_quality
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->beam_quality;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_velocity
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->beam_velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_velocity_covar
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->beam_velocity_covar;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t max_serialized_size_key_marine_acoustic_msgs__msg__Dvl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: velocity_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dvl_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: velocity_covar
  {
    size_t array_size = 9;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: course_gnd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: speed_gnd
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: num_good_beams
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sound_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: beam_ranges_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: beam_velocities_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: beam_unit_vec
  {
    size_t array_size = 4;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: range
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: range_covar
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: beam_quality
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: beam_velocity
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: beam_velocity_covar
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_acoustic_msgs__msg__Dvl;
    is_plain =
      (
      offsetof(DataType, beam_velocity_covar) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Dvl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_acoustic_msgs__msg__Dvl * ros_message = static_cast<const marine_acoustic_msgs__msg__Dvl *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_marine_acoustic_msgs__msg__Dvl(ros_message, cdr);
}

static bool _Dvl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_acoustic_msgs__msg__Dvl * ros_message = static_cast<marine_acoustic_msgs__msg__Dvl *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_marine_acoustic_msgs__msg__Dvl(cdr, ros_message);
}

static uint32_t _Dvl__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marine_acoustic_msgs__msg__Dvl(
      untyped_ros_message, 0));
}

static size_t _Dvl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marine_acoustic_msgs__msg__Dvl(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__Dvl(
  const marine_acoustic_msgs__msg__Dvl * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: header
  {
    cdr_serialize_with_endpoint_std_msgs__msg__Header(
      &ros_message->header, cdr, endpoint_info, serialization_context);
  }

  // Field name: velocity_mode
  {
    cdr << ros_message->velocity_mode;
  }

  // Field name: dvl_type
  {
    cdr << ros_message->dvl_type;
  }

  // Field name: velocity
  {
    cdr_serialize_with_endpoint_geometry_msgs__msg__Vector3(
      &ros_message->velocity, cdr, endpoint_info, serialization_context);
  }

  // Field name: velocity_covar
  {
    size_t size = 9;
    auto array_ptr = ros_message->velocity_covar;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: altitude
  {
    cdr << ros_message->altitude;
  }

  // Field name: course_gnd
  {
    cdr << ros_message->course_gnd;
  }

  // Field name: speed_gnd
  {
    cdr << ros_message->speed_gnd;
  }

  // Field name: num_good_beams
  {
    cdr << ros_message->num_good_beams;
  }

  // Field name: sound_speed
  {
    cdr << ros_message->sound_speed;
  }

  // Field name: beam_ranges_valid
  {
    cdr << (ros_message->beam_ranges_valid ? true : false);
  }

  // Field name: beam_velocities_valid
  {
    cdr << (ros_message->beam_velocities_valid ? true : false);
  }

  // Field name: beam_unit_vec
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_unit_vec;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_with_endpoint_geometry_msgs__msg__Vector3(
        &array_ptr[i], cdr, endpoint_info, serialization_context);
    }
  }

  // Field name: range
  {
    size_t size = 4;
    auto array_ptr = ros_message->range;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: range_covar
  {
    size_t size = 4;
    auto array_ptr = ros_message->range_covar;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: beam_quality
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_quality;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: beam_velocity
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_velocity;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: beam_velocity_covar
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_velocity_covar;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__Dvl(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__Dvl * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: header
  {
    cdr_deserialize_with_endpoint_std_msgs__msg__Header(cdr, &ros_message->header, endpoint_info, serialization_context);
  }

  // Field name: velocity_mode
  {
    cdr >> ros_message->velocity_mode;
  }

  // Field name: dvl_type
  {
    cdr >> ros_message->dvl_type;
  }

  // Field name: velocity
  {
    cdr_deserialize_with_endpoint_geometry_msgs__msg__Vector3(cdr, &ros_message->velocity, endpoint_info, serialization_context);
  }

  // Field name: velocity_covar
  {
    size_t size = 9;
    auto array_ptr = ros_message->velocity_covar;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: altitude
  {
    cdr >> ros_message->altitude;
  }

  // Field name: course_gnd
  {
    cdr >> ros_message->course_gnd;
  }

  // Field name: speed_gnd
  {
    cdr >> ros_message->speed_gnd;
  }

  // Field name: num_good_beams
  {
    cdr >> ros_message->num_good_beams;
  }

  // Field name: sound_speed
  {
    cdr >> ros_message->sound_speed;
  }

  // Field name: beam_ranges_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beam_ranges_valid = tmp ? true : false;
  }

  // Field name: beam_velocities_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beam_velocities_valid = tmp ? true : false;
  }

  // Field name: beam_unit_vec
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_unit_vec;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_with_endpoint_geometry_msgs__msg__Vector3(cdr, &array_ptr[i], endpoint_info, serialization_context);
    }
  }

  // Field name: range
  {
    size_t size = 4;
    auto array_ptr = ros_message->range;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: range_covar
  {
    size_t size = 4;
    auto array_ptr = ros_message->range_covar;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: beam_quality
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_quality;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: beam_velocity
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_velocity;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: beam_velocity_covar
  {
    size_t size = 4;
    auto array_ptr = ros_message->beam_velocity_covar;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _Dvl__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_acoustic_msgs__msg__Dvl * ros_message =
    static_cast<const marine_acoustic_msgs__msg__Dvl *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__Dvl(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _Dvl__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_acoustic_msgs__msg__Dvl * ros_message =
    static_cast<marine_acoustic_msgs__msg__Dvl *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__Dvl(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool has_buffer_fields_marine_acoustic_msgs__msg__Dvl()
{
  return
    has_buffer_fields_std_msgs__msg__Header() ||
    has_buffer_fields_geometry_msgs__msg__Vector3();
}

static message_type_support_callbacks_t __callbacks_Dvl = {
  "marine_acoustic_msgs::msg",
  "Dvl",
  _Dvl__cdr_serialize,
  _Dvl__cdr_deserialize,
  _Dvl__get_serialized_size,
  _Dvl__max_serialized_size,
  nullptr,
  has_buffer_fields_marine_acoustic_msgs__msg__Dvl(),
  _Dvl__cdr_serialize_with_endpoint,
  _Dvl__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _Dvl__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Dvl,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__Dvl__get_type_hash,
  &marine_acoustic_msgs__msg__Dvl__get_type_description,
  &marine_acoustic_msgs__msg__Dvl__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marine_acoustic_msgs, msg, Dvl)() {
  return &_Dvl__type_support;
}

#if defined(__cplusplus)
}
#endif
