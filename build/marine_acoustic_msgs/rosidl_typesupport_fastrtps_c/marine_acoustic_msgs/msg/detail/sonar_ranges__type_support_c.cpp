// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marine_acoustic_msgs:msg/SonarRanges.idl
// generated code does not contain a copyright notice
#include "marine_acoustic_msgs/msg/detail/sonar_ranges__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marine_acoustic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marine_acoustic_msgs/msg/detail/sonar_ranges__struct.h"
#include "marine_acoustic_msgs/msg/detail/sonar_ranges__functions.h"
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

#include "geometry_msgs/msg/detail/vector3__functions.h"  // beam_unit_vec
#include "marine_acoustic_msgs/msg/detail/detection_flag__functions.h"  // flags
#include "marine_acoustic_msgs/msg/detail/ping_info__functions.h"  // ping_info
#include "rosidl_runtime_c/primitives_sequence.h"  // intensities, ranges, transmit_delays
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // intensities, ranges, transmit_delays
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

bool cdr_serialize_marine_acoustic_msgs__msg__DetectionFlag(
  const marine_acoustic_msgs__msg__DetectionFlag * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_marine_acoustic_msgs__msg__DetectionFlag(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__DetectionFlag * ros_message);

size_t get_serialized_size_marine_acoustic_msgs__msg__DetectionFlag(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_marine_acoustic_msgs__msg__DetectionFlag(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_marine_acoustic_msgs__msg__DetectionFlag(
  const marine_acoustic_msgs__msg__DetectionFlag * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_marine_acoustic_msgs__msg__DetectionFlag(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_marine_acoustic_msgs__msg__DetectionFlag(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marine_acoustic_msgs, msg, DetectionFlag)();

bool cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__DetectionFlag(
  const marine_acoustic_msgs__msg__DetectionFlag * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__DetectionFlag(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__DetectionFlag * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool has_buffer_fields_marine_acoustic_msgs__msg__DetectionFlag();

bool cdr_serialize_marine_acoustic_msgs__msg__PingInfo(
  const marine_acoustic_msgs__msg__PingInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_marine_acoustic_msgs__msg__PingInfo(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__PingInfo * ros_message);

size_t get_serialized_size_marine_acoustic_msgs__msg__PingInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_marine_acoustic_msgs__msg__PingInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_marine_acoustic_msgs__msg__PingInfo(
  const marine_acoustic_msgs__msg__PingInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_marine_acoustic_msgs__msg__PingInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_marine_acoustic_msgs__msg__PingInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marine_acoustic_msgs, msg, PingInfo)();

bool cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__PingInfo(
  const marine_acoustic_msgs__msg__PingInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__PingInfo(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__PingInfo * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool has_buffer_fields_marine_acoustic_msgs__msg__PingInfo();

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


using _SonarRanges__ros_msg_type = marine_acoustic_msgs__msg__SonarRanges;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_marine_acoustic_msgs__msg__SonarRanges(
  const marine_acoustic_msgs__msg__SonarRanges * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: ping_info
  {
    cdr_serialize_marine_acoustic_msgs__msg__PingInfo(
      &ros_message->ping_info, cdr);
  }

  // Field name: flags
  {
    size_t size = ros_message->flags.size;
    auto array_ptr = ros_message->flags.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_marine_acoustic_msgs__msg__DetectionFlag(
        &array_ptr[i], cdr);
    }
  }

  // Field name: transmit_delays
  {
    size_t size = ros_message->transmit_delays.size;
    auto array_ptr = ros_message->transmit_delays.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: intensities
  {
    size_t size = ros_message->intensities.size;
    auto array_ptr = ros_message->intensities.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: beam_unit_vec
  {
    size_t size = ros_message->beam_unit_vec.size;
    auto array_ptr = ros_message->beam_unit_vec.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Vector3(
        &array_ptr[i], cdr);
    }
  }

  // Field name: ranges
  {
    size_t size = ros_message->ranges.size;
    auto array_ptr = ros_message->ranges.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_deserialize_marine_acoustic_msgs__msg__SonarRanges(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__SonarRanges * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: ping_info
  {
    cdr_deserialize_marine_acoustic_msgs__msg__PingInfo(cdr, &ros_message->ping_info);
  }

  // Field name: flags
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->flags.data) {
      marine_acoustic_msgs__msg__DetectionFlag__Sequence__fini(&ros_message->flags);
    }
    if (!marine_acoustic_msgs__msg__DetectionFlag__Sequence__init(&ros_message->flags, size)) {
      fprintf(stderr, "failed to create array for field 'flags'");
      return false;
    }
    auto array_ptr = ros_message->flags.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_marine_acoustic_msgs__msg__DetectionFlag(cdr, &array_ptr[i]);
    }
  }

  // Field name: transmit_delays
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->transmit_delays.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->transmit_delays);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->transmit_delays, size)) {
      fprintf(stderr, "failed to create array for field 'transmit_delays'");
      return false;
    }
    auto array_ptr = ros_message->transmit_delays.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: intensities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->intensities.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->intensities);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->intensities, size)) {
      fprintf(stderr, "failed to create array for field 'intensities'");
      return false;
    }
    auto array_ptr = ros_message->intensities.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: beam_unit_vec
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->beam_unit_vec.data) {
      geometry_msgs__msg__Vector3__Sequence__fini(&ros_message->beam_unit_vec);
    }
    if (!geometry_msgs__msg__Vector3__Sequence__init(&ros_message->beam_unit_vec, size)) {
      fprintf(stderr, "failed to create array for field 'beam_unit_vec'");
      return false;
    }
    auto array_ptr = ros_message->beam_unit_vec.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &array_ptr[i]);
    }
  }

  // Field name: ranges
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->ranges.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->ranges);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->ranges, size)) {
      fprintf(stderr, "failed to create array for field 'ranges'");
      return false;
    }
    auto array_ptr = ros_message->ranges.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t get_serialized_size_marine_acoustic_msgs__msg__SonarRanges(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SonarRanges__ros_msg_type * ros_message = static_cast<const _SonarRanges__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: ping_info
  current_alignment += get_serialized_size_marine_acoustic_msgs__msg__PingInfo(
    &(ros_message->ping_info), current_alignment);

  // Field name: flags
  {
    size_t array_size = ros_message->flags.size;
    auto array_ptr = ros_message->flags.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_marine_acoustic_msgs__msg__DetectionFlag(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: transmit_delays
  {
    size_t array_size = ros_message->transmit_delays.size;
    auto array_ptr = ros_message->transmit_delays.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: intensities
  {
    size_t array_size = ros_message->intensities.size;
    auto array_ptr = ros_message->intensities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_unit_vec
  {
    size_t array_size = ros_message->beam_unit_vec.size;
    auto array_ptr = ros_message->beam_unit_vec.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: ranges
  {
    size_t array_size = ros_message->ranges.size;
    auto array_ptr = ros_message->ranges.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t max_serialized_size_marine_acoustic_msgs__msg__SonarRanges(
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

  // Field name: ping_info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_marine_acoustic_msgs__msg__PingInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: flags
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_marine_acoustic_msgs__msg__DetectionFlag(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: transmit_delays
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: intensities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: beam_unit_vec
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
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

  // Field name: ranges
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_acoustic_msgs__msg__SonarRanges;
    is_plain =
      (
      offsetof(DataType, ranges) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_key_marine_acoustic_msgs__msg__SonarRanges(
  const marine_acoustic_msgs__msg__SonarRanges * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: ping_info
  {
    cdr_serialize_key_marine_acoustic_msgs__msg__PingInfo(
      &ros_message->ping_info, cdr);
  }

  // Field name: flags
  {
    size_t size = ros_message->flags.size;
    auto array_ptr = ros_message->flags.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_marine_acoustic_msgs__msg__DetectionFlag(
        &array_ptr[i], cdr);
    }
  }

  // Field name: transmit_delays
  {
    size_t size = ros_message->transmit_delays.size;
    auto array_ptr = ros_message->transmit_delays.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: intensities
  {
    size_t size = ros_message->intensities.size;
    auto array_ptr = ros_message->intensities.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: beam_unit_vec
  {
    size_t size = ros_message->beam_unit_vec.size;
    auto array_ptr = ros_message->beam_unit_vec.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Vector3(
        &array_ptr[i], cdr);
    }
  }

  // Field name: ranges
  {
    size_t size = ros_message->ranges.size;
    auto array_ptr = ros_message->ranges.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t get_serialized_size_key_marine_acoustic_msgs__msg__SonarRanges(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SonarRanges__ros_msg_type * ros_message = static_cast<const _SonarRanges__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: ping_info
  current_alignment += get_serialized_size_key_marine_acoustic_msgs__msg__PingInfo(
    &(ros_message->ping_info), current_alignment);

  // Field name: flags
  {
    size_t array_size = ros_message->flags.size;
    auto array_ptr = ros_message->flags.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_marine_acoustic_msgs__msg__DetectionFlag(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: transmit_delays
  {
    size_t array_size = ros_message->transmit_delays.size;
    auto array_ptr = ros_message->transmit_delays.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: intensities
  {
    size_t array_size = ros_message->intensities.size;
    auto array_ptr = ros_message->intensities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_unit_vec
  {
    size_t array_size = ros_message->beam_unit_vec.size;
    auto array_ptr = ros_message->beam_unit_vec.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: ranges
  {
    size_t array_size = ros_message->ranges.size;
    auto array_ptr = ros_message->ranges.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t max_serialized_size_key_marine_acoustic_msgs__msg__SonarRanges(
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

  // Field name: ping_info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_marine_acoustic_msgs__msg__PingInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: flags
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_marine_acoustic_msgs__msg__DetectionFlag(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: transmit_delays
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: intensities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: beam_unit_vec
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
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

  // Field name: ranges
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_acoustic_msgs__msg__SonarRanges;
    is_plain =
      (
      offsetof(DataType, ranges) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SonarRanges__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_acoustic_msgs__msg__SonarRanges * ros_message = static_cast<const marine_acoustic_msgs__msg__SonarRanges *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_marine_acoustic_msgs__msg__SonarRanges(ros_message, cdr);
}

static bool _SonarRanges__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_acoustic_msgs__msg__SonarRanges * ros_message = static_cast<marine_acoustic_msgs__msg__SonarRanges *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_marine_acoustic_msgs__msg__SonarRanges(cdr, ros_message);
}

static uint32_t _SonarRanges__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marine_acoustic_msgs__msg__SonarRanges(
      untyped_ros_message, 0));
}

static size_t _SonarRanges__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marine_acoustic_msgs__msg__SonarRanges(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__SonarRanges(
  const marine_acoustic_msgs__msg__SonarRanges * ros_message,
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

  // Field name: ping_info
  {
    cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__PingInfo(
      &ros_message->ping_info, cdr, endpoint_info, serialization_context);
  }

  // Field name: flags
  {
    size_t size = ros_message->flags.size;
    auto array_ptr = ros_message->flags.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__DetectionFlag(
        &array_ptr[i], cdr, endpoint_info, serialization_context);
    }
  }

  // Field name: transmit_delays
  {
    size_t size = ros_message->transmit_delays.size;
    auto array_ptr = ros_message->transmit_delays.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: intensities
  {
    size_t size = ros_message->intensities.size;
    auto array_ptr = ros_message->intensities.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: beam_unit_vec
  {
    size_t size = ros_message->beam_unit_vec.size;
    auto array_ptr = ros_message->beam_unit_vec.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_with_endpoint_geometry_msgs__msg__Vector3(
        &array_ptr[i], cdr, endpoint_info, serialization_context);
    }
  }

  // Field name: ranges
  {
    size_t size = ros_message->ranges.size;
    auto array_ptr = ros_message->ranges.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__SonarRanges(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__SonarRanges * ros_message,
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

  // Field name: ping_info
  {
    cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__PingInfo(cdr, &ros_message->ping_info, endpoint_info, serialization_context);
  }

  // Field name: flags
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->flags.data) {
      marine_acoustic_msgs__msg__DetectionFlag__Sequence__fini(&ros_message->flags);
    }
    if (!marine_acoustic_msgs__msg__DetectionFlag__Sequence__init(&ros_message->flags, size)) {
      fprintf(stderr, "failed to create array for field 'flags'");
      return false;
    }
    auto array_ptr = ros_message->flags.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__DetectionFlag(cdr, &array_ptr[i], endpoint_info, serialization_context);
    }
  }

  // Field name: transmit_delays
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->transmit_delays.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->transmit_delays);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->transmit_delays, size)) {
      fprintf(stderr, "failed to create array for field 'transmit_delays'");
      return false;
    }
    auto array_ptr = ros_message->transmit_delays.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: intensities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->intensities.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->intensities);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->intensities, size)) {
      fprintf(stderr, "failed to create array for field 'intensities'");
      return false;
    }
    auto array_ptr = ros_message->intensities.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: beam_unit_vec
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->beam_unit_vec.data) {
      geometry_msgs__msg__Vector3__Sequence__fini(&ros_message->beam_unit_vec);
    }
    if (!geometry_msgs__msg__Vector3__Sequence__init(&ros_message->beam_unit_vec, size)) {
      fprintf(stderr, "failed to create array for field 'beam_unit_vec'");
      return false;
    }
    auto array_ptr = ros_message->beam_unit_vec.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_with_endpoint_geometry_msgs__msg__Vector3(cdr, &array_ptr[i], endpoint_info, serialization_context);
    }
  }

  // Field name: ranges
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->ranges.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->ranges);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->ranges, size)) {
      fprintf(stderr, "failed to create array for field 'ranges'");
      return false;
    }
    auto array_ptr = ros_message->ranges.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _SonarRanges__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_acoustic_msgs__msg__SonarRanges * ros_message =
    static_cast<const marine_acoustic_msgs__msg__SonarRanges *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__SonarRanges(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _SonarRanges__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_acoustic_msgs__msg__SonarRanges * ros_message =
    static_cast<marine_acoustic_msgs__msg__SonarRanges *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__SonarRanges(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool has_buffer_fields_marine_acoustic_msgs__msg__SonarRanges()
{
  return
    has_buffer_fields_std_msgs__msg__Header() ||
    has_buffer_fields_marine_acoustic_msgs__msg__PingInfo() ||
    has_buffer_fields_marine_acoustic_msgs__msg__DetectionFlag() ||
    has_buffer_fields_geometry_msgs__msg__Vector3();
}

static message_type_support_callbacks_t __callbacks_SonarRanges = {
  "marine_acoustic_msgs::msg",
  "SonarRanges",
  _SonarRanges__cdr_serialize,
  _SonarRanges__cdr_deserialize,
  _SonarRanges__get_serialized_size,
  _SonarRanges__max_serialized_size,
  nullptr,
  has_buffer_fields_marine_acoustic_msgs__msg__SonarRanges(),
  _SonarRanges__cdr_serialize_with_endpoint,
  _SonarRanges__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _SonarRanges__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SonarRanges,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__SonarRanges__get_type_hash,
  &marine_acoustic_msgs__msg__SonarRanges__get_type_description,
  &marine_acoustic_msgs__msg__SonarRanges__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marine_acoustic_msgs, msg, SonarRanges)() {
  return &_SonarRanges__type_support;
}

#if defined(__cplusplus)
}
#endif
