// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marine_acoustic_msgs:msg/PingInfo.idl
// generated code does not contain a copyright notice
#include "marine_acoustic_msgs/msg/detail/ping_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marine_acoustic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marine_acoustic_msgs/msg/detail/ping_info__struct.h"
#include "marine_acoustic_msgs/msg/detail/ping_info__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // rx_beamwidths, tx_beamwidths
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // rx_beamwidths, tx_beamwidths

// forward declare type support functions


using _PingInfo__ros_msg_type = marine_acoustic_msgs__msg__PingInfo;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_marine_acoustic_msgs__msg__PingInfo(
  const marine_acoustic_msgs__msg__PingInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: frequency
  {
    cdr << ros_message->frequency;
  }

  // Field name: sound_speed
  {
    cdr << ros_message->sound_speed;
  }

  // Field name: tx_beamwidths
  {
    size_t size = ros_message->tx_beamwidths.size;
    auto array_ptr = ros_message->tx_beamwidths.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: rx_beamwidths
  {
    size_t size = ros_message->rx_beamwidths.size;
    auto array_ptr = ros_message->rx_beamwidths.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_deserialize_marine_acoustic_msgs__msg__PingInfo(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__PingInfo * ros_message)
{
  // Field name: frequency
  {
    cdr >> ros_message->frequency;
  }

  // Field name: sound_speed
  {
    cdr >> ros_message->sound_speed;
  }

  // Field name: tx_beamwidths
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

    if (ros_message->tx_beamwidths.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->tx_beamwidths);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->tx_beamwidths, size)) {
      fprintf(stderr, "failed to create array for field 'tx_beamwidths'");
      return false;
    }
    auto array_ptr = ros_message->tx_beamwidths.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: rx_beamwidths
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

    if (ros_message->rx_beamwidths.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->rx_beamwidths);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->rx_beamwidths, size)) {
      fprintf(stderr, "failed to create array for field 'rx_beamwidths'");
      return false;
    }
    auto array_ptr = ros_message->rx_beamwidths.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t get_serialized_size_marine_acoustic_msgs__msg__PingInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PingInfo__ros_msg_type * ros_message = static_cast<const _PingInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: frequency
  {
    size_t item_size = sizeof(ros_message->frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sound_speed
  {
    size_t item_size = sizeof(ros_message->sound_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tx_beamwidths
  {
    size_t array_size = ros_message->tx_beamwidths.size;
    auto array_ptr = ros_message->tx_beamwidths.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rx_beamwidths
  {
    size_t array_size = ros_message->rx_beamwidths.size;
    auto array_ptr = ros_message->rx_beamwidths.data;
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
size_t max_serialized_size_marine_acoustic_msgs__msg__PingInfo(
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

  // Field name: frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sound_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: tx_beamwidths
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

  // Field name: rx_beamwidths
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
    using DataType = marine_acoustic_msgs__msg__PingInfo;
    is_plain =
      (
      offsetof(DataType, rx_beamwidths) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_key_marine_acoustic_msgs__msg__PingInfo(
  const marine_acoustic_msgs__msg__PingInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: frequency
  {
    cdr << ros_message->frequency;
  }

  // Field name: sound_speed
  {
    cdr << ros_message->sound_speed;
  }

  // Field name: tx_beamwidths
  {
    size_t size = ros_message->tx_beamwidths.size;
    auto array_ptr = ros_message->tx_beamwidths.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: rx_beamwidths
  {
    size_t size = ros_message->rx_beamwidths.size;
    auto array_ptr = ros_message->rx_beamwidths.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t get_serialized_size_key_marine_acoustic_msgs__msg__PingInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PingInfo__ros_msg_type * ros_message = static_cast<const _PingInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: frequency
  {
    size_t item_size = sizeof(ros_message->frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sound_speed
  {
    size_t item_size = sizeof(ros_message->sound_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: tx_beamwidths
  {
    size_t array_size = ros_message->tx_beamwidths.size;
    auto array_ptr = ros_message->tx_beamwidths.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rx_beamwidths
  {
    size_t array_size = ros_message->rx_beamwidths.size;
    auto array_ptr = ros_message->rx_beamwidths.data;
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
size_t max_serialized_size_key_marine_acoustic_msgs__msg__PingInfo(
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
  // Field name: frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sound_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: tx_beamwidths
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

  // Field name: rx_beamwidths
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
    using DataType = marine_acoustic_msgs__msg__PingInfo;
    is_plain =
      (
      offsetof(DataType, rx_beamwidths) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PingInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_acoustic_msgs__msg__PingInfo * ros_message = static_cast<const marine_acoustic_msgs__msg__PingInfo *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_marine_acoustic_msgs__msg__PingInfo(ros_message, cdr);
}

static bool _PingInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_acoustic_msgs__msg__PingInfo * ros_message = static_cast<marine_acoustic_msgs__msg__PingInfo *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_marine_acoustic_msgs__msg__PingInfo(cdr, ros_message);
}

static uint32_t _PingInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marine_acoustic_msgs__msg__PingInfo(
      untyped_ros_message, 0));
}

static size_t _PingInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marine_acoustic_msgs__msg__PingInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__PingInfo(
  const marine_acoustic_msgs__msg__PingInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: frequency
  {
    cdr << ros_message->frequency;
  }

  // Field name: sound_speed
  {
    cdr << ros_message->sound_speed;
  }

  // Field name: tx_beamwidths
  {
    size_t size = ros_message->tx_beamwidths.size;
    auto array_ptr = ros_message->tx_beamwidths.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: rx_beamwidths
  {
    size_t size = ros_message->rx_beamwidths.size;
    auto array_ptr = ros_message->rx_beamwidths.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__PingInfo(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__PingInfo * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: frequency
  {
    cdr >> ros_message->frequency;
  }

  // Field name: sound_speed
  {
    cdr >> ros_message->sound_speed;
  }

  // Field name: tx_beamwidths
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

    if (ros_message->tx_beamwidths.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->tx_beamwidths);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->tx_beamwidths, size)) {
      fprintf(stderr, "failed to create array for field 'tx_beamwidths'");
      return false;
    }
    auto array_ptr = ros_message->tx_beamwidths.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: rx_beamwidths
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

    if (ros_message->rx_beamwidths.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->rx_beamwidths);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->rx_beamwidths, size)) {
      fprintf(stderr, "failed to create array for field 'rx_beamwidths'");
      return false;
    }
    auto array_ptr = ros_message->rx_beamwidths.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _PingInfo__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_acoustic_msgs__msg__PingInfo * ros_message =
    static_cast<const marine_acoustic_msgs__msg__PingInfo *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__PingInfo(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _PingInfo__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_acoustic_msgs__msg__PingInfo * ros_message =
    static_cast<marine_acoustic_msgs__msg__PingInfo *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__PingInfo(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool has_buffer_fields_marine_acoustic_msgs__msg__PingInfo()
{
  return
    false;
}

static message_type_support_callbacks_t __callbacks_PingInfo = {
  "marine_acoustic_msgs::msg",
  "PingInfo",
  _PingInfo__cdr_serialize,
  _PingInfo__cdr_deserialize,
  _PingInfo__get_serialized_size,
  _PingInfo__max_serialized_size,
  nullptr,
  has_buffer_fields_marine_acoustic_msgs__msg__PingInfo(),
  _PingInfo__cdr_serialize_with_endpoint,
  _PingInfo__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _PingInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PingInfo,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__PingInfo__get_type_hash,
  &marine_acoustic_msgs__msg__PingInfo__get_type_description,
  &marine_acoustic_msgs__msg__PingInfo__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marine_acoustic_msgs, msg, PingInfo)() {
  return &_PingInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
