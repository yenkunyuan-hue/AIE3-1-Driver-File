// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marine_acoustic_msgs:msg/DetectionFlag.idl
// generated code does not contain a copyright notice
#include "marine_acoustic_msgs/msg/detail/detection_flag__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marine_acoustic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marine_acoustic_msgs/msg/detail/detection_flag__struct.h"
#include "marine_acoustic_msgs/msg/detail/detection_flag__functions.h"
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


// forward declare type support functions


using _DetectionFlag__ros_msg_type = marine_acoustic_msgs__msg__DetectionFlag;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_marine_acoustic_msgs__msg__DetectionFlag(
  const marine_acoustic_msgs__msg__DetectionFlag * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: flag
  {
    cdr << ros_message->flag;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_deserialize_marine_acoustic_msgs__msg__DetectionFlag(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__DetectionFlag * ros_message)
{
  // Field name: flag
  {
    cdr >> ros_message->flag;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t get_serialized_size_marine_acoustic_msgs__msg__DetectionFlag(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectionFlag__ros_msg_type * ros_message = static_cast<const _DetectionFlag__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: flag
  {
    size_t item_size = sizeof(ros_message->flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t max_serialized_size_marine_acoustic_msgs__msg__DetectionFlag(
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

  // Field name: flag
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_acoustic_msgs__msg__DetectionFlag;
    is_plain =
      (
      offsetof(DataType, flag) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_key_marine_acoustic_msgs__msg__DetectionFlag(
  const marine_acoustic_msgs__msg__DetectionFlag * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: flag
  {
    cdr << ros_message->flag;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t get_serialized_size_key_marine_acoustic_msgs__msg__DetectionFlag(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectionFlag__ros_msg_type * ros_message = static_cast<const _DetectionFlag__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: flag
  {
    size_t item_size = sizeof(ros_message->flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t max_serialized_size_key_marine_acoustic_msgs__msg__DetectionFlag(
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
  // Field name: flag
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_acoustic_msgs__msg__DetectionFlag;
    is_plain =
      (
      offsetof(DataType, flag) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DetectionFlag__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_acoustic_msgs__msg__DetectionFlag * ros_message = static_cast<const marine_acoustic_msgs__msg__DetectionFlag *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_marine_acoustic_msgs__msg__DetectionFlag(ros_message, cdr);
}

static bool _DetectionFlag__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_acoustic_msgs__msg__DetectionFlag * ros_message = static_cast<marine_acoustic_msgs__msg__DetectionFlag *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_marine_acoustic_msgs__msg__DetectionFlag(cdr, ros_message);
}

static uint32_t _DetectionFlag__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marine_acoustic_msgs__msg__DetectionFlag(
      untyped_ros_message, 0));
}

static size_t _DetectionFlag__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marine_acoustic_msgs__msg__DetectionFlag(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__DetectionFlag(
  const marine_acoustic_msgs__msg__DetectionFlag * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: flag
  {
    cdr << ros_message->flag;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__DetectionFlag(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__DetectionFlag * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: flag
  {
    cdr >> ros_message->flag;
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _DetectionFlag__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_acoustic_msgs__msg__DetectionFlag * ros_message =
    static_cast<const marine_acoustic_msgs__msg__DetectionFlag *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__DetectionFlag(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _DetectionFlag__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_acoustic_msgs__msg__DetectionFlag * ros_message =
    static_cast<marine_acoustic_msgs__msg__DetectionFlag *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__DetectionFlag(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool has_buffer_fields_marine_acoustic_msgs__msg__DetectionFlag()
{
  return
    false;
}

static message_type_support_callbacks_t __callbacks_DetectionFlag = {
  "marine_acoustic_msgs::msg",
  "DetectionFlag",
  _DetectionFlag__cdr_serialize,
  _DetectionFlag__cdr_deserialize,
  _DetectionFlag__get_serialized_size,
  _DetectionFlag__max_serialized_size,
  nullptr,
  has_buffer_fields_marine_acoustic_msgs__msg__DetectionFlag(),
  _DetectionFlag__cdr_serialize_with_endpoint,
  _DetectionFlag__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _DetectionFlag__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetectionFlag,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__DetectionFlag__get_type_hash,
  &marine_acoustic_msgs__msg__DetectionFlag__get_type_description,
  &marine_acoustic_msgs__msg__DetectionFlag__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marine_acoustic_msgs, msg, DetectionFlag)() {
  return &_DetectionFlag__type_support;
}

#if defined(__cplusplus)
}
#endif
