// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from marine_acoustic_msgs:msg/DetectionFlag.idl
// generated code does not contain a copyright notice
#include "marine_acoustic_msgs/msg/detail/detection_flag__rosidl_typesupport_fastrtps_cpp.hpp"
#include "marine_acoustic_msgs/msg/detail/detection_flag__functions.h"
#include "marine_acoustic_msgs/msg/detail/detection_flag__struct.hpp"

#include <cstddef>
#include <cstdio>
#include <limits>
#include <stdexcept>
#include <string>
#include "rcutils/logging_macros.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "marine_acoustic_msgs/msg/detail/detection_flag__rosidl_typesupport_fastrtps_c.h"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace marine_acoustic_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
cdr_serialize(
  const marine_acoustic_msgs::msg::DetectionFlag & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: flag
  cdr << ros_message.flag;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs::msg::DetectionFlag & ros_message)
{
  // Member: flag
  cdr >> ros_message.flag;

  return true;
}  // NOLINT(readability/fn_size)

// Endpoint-aware serialization. Always emitted so parent messages can recurse
// through non-Buffer intermediate message types.
bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
cdr_serialize_with_endpoint(
  const marine_acoustic_msgs::msg::DetectionFlag & ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  try {
    // Member: flag
    cdr << ros_message.flag;
  } catch (const std::exception & e) {
    RCUTILS_LOG_ERROR_NAMED(
      "marine_acoustic_msgs.typesupport_fastrtps_cpp",
      "cdr_serialize_with_endpoint failed: %s", e.what());
    return false;
  }
  return true;
}

// Endpoint-aware deserialization. Always emitted so parent messages can recurse
// through non-Buffer intermediate message types.
bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs::msg::DetectionFlag & ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Member: flag
  cdr >> ros_message.flag;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
get_serialized_size(
  const marine_acoustic_msgs::msg::DetectionFlag & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: flag
  {
    size_t item_size = sizeof(ros_message.flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
max_serialized_size_DetectionFlag(
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

  // Member: flag
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
    using DataType = marine_acoustic_msgs::msg::DetectionFlag;
    is_plain =
      (
      offsetof(DataType, flag) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
cdr_serialize_key(
  const marine_acoustic_msgs::msg::DetectionFlag & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: flag
  cdr << ros_message.flag;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
get_serialized_size_key(
  const marine_acoustic_msgs::msg::DetectionFlag & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: flag
  {
    size_t item_size = sizeof(ros_message.flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
max_serialized_size_key_DetectionFlag(
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

  // Member: flag
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
    using DataType = marine_acoustic_msgs::msg::DetectionFlag;
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
  auto typed_message =
    static_cast<const marine_acoustic_msgs::msg::DetectionFlag *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DetectionFlag__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<marine_acoustic_msgs::msg::DetectionFlag *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DetectionFlag__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const marine_acoustic_msgs::msg::DetectionFlag *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DetectionFlag__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DetectionFlag(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

// Endpoint-aware serialization wrapper
static bool _DetectionFlag__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  auto typed_message =
    static_cast<const marine_acoustic_msgs::msg::DetectionFlag *>(
    untyped_ros_message);
  return cdr_serialize_with_endpoint(*typed_message, cdr, endpoint_info, serialization_context);
}

// Endpoint-aware deserialization wrapper
static bool _DetectionFlag__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  auto typed_message =
    static_cast<marine_acoustic_msgs::msg::DetectionFlag *>(
    untyped_ros_message);
  return cdr_deserialize_with_endpoint(cdr, *typed_message, endpoint_info, serialization_context);
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
has_buffer_fields_DetectionFlag()
{
  return has_buffer_fields_marine_acoustic_msgs__msg__DetectionFlag();
}

static message_type_support_callbacks_t _DetectionFlag__callbacks = {
  "marine_acoustic_msgs::msg",
  "DetectionFlag",
  _DetectionFlag__cdr_serialize,
  _DetectionFlag__cdr_deserialize,
  _DetectionFlag__get_serialized_size,
  _DetectionFlag__max_serialized_size,
  nullptr,
  has_buffer_fields_DetectionFlag(),
  _DetectionFlag__cdr_serialize_with_endpoint,
  _DetectionFlag__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _DetectionFlag__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DetectionFlag__callbacks,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__DetectionFlag__get_type_hash,
  &marine_acoustic_msgs__msg__DetectionFlag__get_type_description,
  &marine_acoustic_msgs__msg__DetectionFlag__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace marine_acoustic_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_marine_acoustic_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<marine_acoustic_msgs::msg::DetectionFlag>()
{
  return &marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::_DetectionFlag__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, marine_acoustic_msgs, msg, DetectionFlag)() {
  return &marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::_DetectionFlag__handle;
}

#ifdef __cplusplus
}
#endif
