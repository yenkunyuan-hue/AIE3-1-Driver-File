// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marine_acoustic_msgs:msg/ProjectedSonarImage.idl
// generated code does not contain a copyright notice
#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marine_acoustic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__struct.h"
#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__functions.h"
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

#include "geometry_msgs/msg/detail/vector3__functions.h"  // beam_directions
#include "marine_acoustic_msgs/msg/detail/ping_info__functions.h"  // ping_info
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__functions.h"  // image
#include "rosidl_runtime_c/primitives_sequence.h"  // ranges
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // ranges
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

bool cdr_serialize_marine_acoustic_msgs__msg__SonarImageData(
  const marine_acoustic_msgs__msg__SonarImageData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_marine_acoustic_msgs__msg__SonarImageData(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__SonarImageData * ros_message);

size_t get_serialized_size_marine_acoustic_msgs__msg__SonarImageData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_marine_acoustic_msgs__msg__SonarImageData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_marine_acoustic_msgs__msg__SonarImageData(
  const marine_acoustic_msgs__msg__SonarImageData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_marine_acoustic_msgs__msg__SonarImageData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_marine_acoustic_msgs__msg__SonarImageData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marine_acoustic_msgs, msg, SonarImageData)();

bool cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__SonarImageData(
  const marine_acoustic_msgs__msg__SonarImageData * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__SonarImageData(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__SonarImageData * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool has_buffer_fields_marine_acoustic_msgs__msg__SonarImageData();

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


using _ProjectedSonarImage__ros_msg_type = marine_acoustic_msgs__msg__ProjectedSonarImage;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_marine_acoustic_msgs__msg__ProjectedSonarImage(
  const marine_acoustic_msgs__msg__ProjectedSonarImage * ros_message,
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

  // Field name: beam_directions
  {
    size_t size = ros_message->beam_directions.size;
    auto array_ptr = ros_message->beam_directions.data;
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

  // Field name: image
  {
    cdr_serialize_marine_acoustic_msgs__msg__SonarImageData(
      &ros_message->image, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_deserialize_marine_acoustic_msgs__msg__ProjectedSonarImage(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__ProjectedSonarImage * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: ping_info
  {
    cdr_deserialize_marine_acoustic_msgs__msg__PingInfo(cdr, &ros_message->ping_info);
  }

  // Field name: beam_directions
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

    if (ros_message->beam_directions.data) {
      geometry_msgs__msg__Vector3__Sequence__fini(&ros_message->beam_directions);
    }
    if (!geometry_msgs__msg__Vector3__Sequence__init(&ros_message->beam_directions, size)) {
      fprintf(stderr, "failed to create array for field 'beam_directions'");
      return false;
    }
    auto array_ptr = ros_message->beam_directions.data;
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

  // Field name: image
  {
    cdr_deserialize_marine_acoustic_msgs__msg__SonarImageData(cdr, &ros_message->image);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t get_serialized_size_marine_acoustic_msgs__msg__ProjectedSonarImage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ProjectedSonarImage__ros_msg_type * ros_message = static_cast<const _ProjectedSonarImage__ros_msg_type *>(untyped_ros_message);
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

  // Field name: beam_directions
  {
    size_t array_size = ros_message->beam_directions.size;
    auto array_ptr = ros_message->beam_directions.data;
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

  // Field name: image
  current_alignment += get_serialized_size_marine_acoustic_msgs__msg__SonarImageData(
    &(ros_message->image), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t max_serialized_size_marine_acoustic_msgs__msg__ProjectedSonarImage(
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

  // Field name: beam_directions
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

  // Field name: image
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_marine_acoustic_msgs__msg__SonarImageData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_acoustic_msgs__msg__ProjectedSonarImage;
    is_plain =
      (
      offsetof(DataType, image) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_key_marine_acoustic_msgs__msg__ProjectedSonarImage(
  const marine_acoustic_msgs__msg__ProjectedSonarImage * ros_message,
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

  // Field name: beam_directions
  {
    size_t size = ros_message->beam_directions.size;
    auto array_ptr = ros_message->beam_directions.data;
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

  // Field name: image
  {
    cdr_serialize_key_marine_acoustic_msgs__msg__SonarImageData(
      &ros_message->image, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t get_serialized_size_key_marine_acoustic_msgs__msg__ProjectedSonarImage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ProjectedSonarImage__ros_msg_type * ros_message = static_cast<const _ProjectedSonarImage__ros_msg_type *>(untyped_ros_message);
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

  // Field name: beam_directions
  {
    size_t array_size = ros_message->beam_directions.size;
    auto array_ptr = ros_message->beam_directions.data;
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

  // Field name: image
  current_alignment += get_serialized_size_key_marine_acoustic_msgs__msg__SonarImageData(
    &(ros_message->image), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t max_serialized_size_key_marine_acoustic_msgs__msg__ProjectedSonarImage(
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

  // Field name: beam_directions
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

  // Field name: image
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_marine_acoustic_msgs__msg__SonarImageData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_acoustic_msgs__msg__ProjectedSonarImage;
    is_plain =
      (
      offsetof(DataType, image) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ProjectedSonarImage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_acoustic_msgs__msg__ProjectedSonarImage * ros_message = static_cast<const marine_acoustic_msgs__msg__ProjectedSonarImage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_marine_acoustic_msgs__msg__ProjectedSonarImage(ros_message, cdr);
}

static bool _ProjectedSonarImage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_acoustic_msgs__msg__ProjectedSonarImage * ros_message = static_cast<marine_acoustic_msgs__msg__ProjectedSonarImage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_marine_acoustic_msgs__msg__ProjectedSonarImage(cdr, ros_message);
}

static uint32_t _ProjectedSonarImage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marine_acoustic_msgs__msg__ProjectedSonarImage(
      untyped_ros_message, 0));
}

static size_t _ProjectedSonarImage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marine_acoustic_msgs__msg__ProjectedSonarImage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__ProjectedSonarImage(
  const marine_acoustic_msgs__msg__ProjectedSonarImage * ros_message,
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

  // Field name: beam_directions
  {
    size_t size = ros_message->beam_directions.size;
    auto array_ptr = ros_message->beam_directions.data;
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

  // Field name: image
  {
    cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__SonarImageData(
      &ros_message->image, cdr, endpoint_info, serialization_context);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__ProjectedSonarImage(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__ProjectedSonarImage * ros_message,
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

  // Field name: beam_directions
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

    if (ros_message->beam_directions.data) {
      geometry_msgs__msg__Vector3__Sequence__fini(&ros_message->beam_directions);
    }
    if (!geometry_msgs__msg__Vector3__Sequence__init(&ros_message->beam_directions, size)) {
      fprintf(stderr, "failed to create array for field 'beam_directions'");
      return false;
    }
    auto array_ptr = ros_message->beam_directions.data;
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

  // Field name: image
  {
    cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__SonarImageData(cdr, &ros_message->image, endpoint_info, serialization_context);
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _ProjectedSonarImage__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_acoustic_msgs__msg__ProjectedSonarImage * ros_message =
    static_cast<const marine_acoustic_msgs__msg__ProjectedSonarImage *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__ProjectedSonarImage(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _ProjectedSonarImage__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_acoustic_msgs__msg__ProjectedSonarImage * ros_message =
    static_cast<marine_acoustic_msgs__msg__ProjectedSonarImage *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__ProjectedSonarImage(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool has_buffer_fields_marine_acoustic_msgs__msg__ProjectedSonarImage()
{
  return
    has_buffer_fields_std_msgs__msg__Header() ||
    has_buffer_fields_marine_acoustic_msgs__msg__PingInfo() ||
    has_buffer_fields_geometry_msgs__msg__Vector3() ||
    has_buffer_fields_marine_acoustic_msgs__msg__SonarImageData();
}

static message_type_support_callbacks_t __callbacks_ProjectedSonarImage = {
  "marine_acoustic_msgs::msg",
  "ProjectedSonarImage",
  _ProjectedSonarImage__cdr_serialize,
  _ProjectedSonarImage__cdr_deserialize,
  _ProjectedSonarImage__get_serialized_size,
  _ProjectedSonarImage__max_serialized_size,
  nullptr,
  has_buffer_fields_marine_acoustic_msgs__msg__ProjectedSonarImage(),
  _ProjectedSonarImage__cdr_serialize_with_endpoint,
  _ProjectedSonarImage__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _ProjectedSonarImage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ProjectedSonarImage,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_hash,
  &marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_description,
  &marine_acoustic_msgs__msg__ProjectedSonarImage__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marine_acoustic_msgs, msg, ProjectedSonarImage)() {
  return &_ProjectedSonarImage__type_support;
}

#if defined(__cplusplus)
}
#endif
