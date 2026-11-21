// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marine_environment_msgs:msg/Conductivity.idl
// generated code does not contain a copyright notice
#include "marine_environment_msgs/msg/detail/conductivity__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marine_environment_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marine_environment_msgs/msg/detail/conductivity__struct.h"
#include "marine_environment_msgs/msg/detail/conductivity__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_environment_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_environment_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_environment_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_environment_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_environment_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_environment_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_environment_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_environment_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_environment_msgs
bool cdr_serialize_with_endpoint_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_environment_msgs
bool cdr_deserialize_with_endpoint_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_marine_environment_msgs
bool has_buffer_fields_std_msgs__msg__Header();


using _Conductivity__ros_msg_type = marine_environment_msgs__msg__Conductivity;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool cdr_serialize_marine_environment_msgs__msg__Conductivity(
  const marine_environment_msgs__msg__Conductivity * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: conductivity
  {
    cdr << ros_message->conductivity;
  }

  // Field name: salinity
  {
    cdr << ros_message->salinity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool cdr_deserialize_marine_environment_msgs__msg__Conductivity(
  eprosima::fastcdr::Cdr & cdr,
  marine_environment_msgs__msg__Conductivity * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: conductivity
  {
    cdr >> ros_message->conductivity;
  }

  // Field name: salinity
  {
    cdr >> ros_message->salinity;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
size_t get_serialized_size_marine_environment_msgs__msg__Conductivity(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Conductivity__ros_msg_type * ros_message = static_cast<const _Conductivity__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: conductivity
  {
    size_t item_size = sizeof(ros_message->conductivity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: salinity
  {
    size_t item_size = sizeof(ros_message->salinity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
size_t max_serialized_size_marine_environment_msgs__msg__Conductivity(
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

  // Field name: conductivity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: salinity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_environment_msgs__msg__Conductivity;
    is_plain =
      (
      offsetof(DataType, salinity) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool cdr_serialize_key_marine_environment_msgs__msg__Conductivity(
  const marine_environment_msgs__msg__Conductivity * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: conductivity
  {
    cdr << ros_message->conductivity;
  }

  // Field name: salinity
  {
    cdr << ros_message->salinity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
size_t get_serialized_size_key_marine_environment_msgs__msg__Conductivity(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Conductivity__ros_msg_type * ros_message = static_cast<const _Conductivity__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: conductivity
  {
    size_t item_size = sizeof(ros_message->conductivity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: salinity
  {
    size_t item_size = sizeof(ros_message->salinity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
size_t max_serialized_size_key_marine_environment_msgs__msg__Conductivity(
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

  // Field name: conductivity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: salinity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_environment_msgs__msg__Conductivity;
    is_plain =
      (
      offsetof(DataType, salinity) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Conductivity__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_environment_msgs__msg__Conductivity * ros_message = static_cast<const marine_environment_msgs__msg__Conductivity *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_marine_environment_msgs__msg__Conductivity(ros_message, cdr);
}

static bool _Conductivity__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_environment_msgs__msg__Conductivity * ros_message = static_cast<marine_environment_msgs__msg__Conductivity *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_marine_environment_msgs__msg__Conductivity(cdr, ros_message);
}

static uint32_t _Conductivity__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marine_environment_msgs__msg__Conductivity(
      untyped_ros_message, 0));
}

static size_t _Conductivity__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marine_environment_msgs__msg__Conductivity(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool cdr_serialize_with_endpoint_marine_environment_msgs__msg__Conductivity(
  const marine_environment_msgs__msg__Conductivity * ros_message,
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

  // Field name: conductivity
  {
    cdr << ros_message->conductivity;
  }

  // Field name: salinity
  {
    cdr << ros_message->salinity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool cdr_deserialize_with_endpoint_marine_environment_msgs__msg__Conductivity(
  eprosima::fastcdr::Cdr & cdr,
  marine_environment_msgs__msg__Conductivity * ros_message,
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

  // Field name: conductivity
  {
    cdr >> ros_message->conductivity;
  }

  // Field name: salinity
  {
    cdr >> ros_message->salinity;
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _Conductivity__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_environment_msgs__msg__Conductivity * ros_message =
    static_cast<const marine_environment_msgs__msg__Conductivity *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_marine_environment_msgs__msg__Conductivity(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _Conductivity__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_environment_msgs__msg__Conductivity * ros_message =
    static_cast<marine_environment_msgs__msg__Conductivity *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_marine_environment_msgs__msg__Conductivity(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool has_buffer_fields_marine_environment_msgs__msg__Conductivity()
{
  return
    has_buffer_fields_std_msgs__msg__Header();
}

static message_type_support_callbacks_t __callbacks_Conductivity = {
  "marine_environment_msgs::msg",
  "Conductivity",
  _Conductivity__cdr_serialize,
  _Conductivity__cdr_deserialize,
  _Conductivity__get_serialized_size,
  _Conductivity__max_serialized_size,
  nullptr,
  has_buffer_fields_marine_environment_msgs__msg__Conductivity(),
  _Conductivity__cdr_serialize_with_endpoint,
  _Conductivity__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _Conductivity__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Conductivity,
  get_message_typesupport_handle_function,
  &marine_environment_msgs__msg__Conductivity__get_type_hash,
  &marine_environment_msgs__msg__Conductivity__get_type_description,
  &marine_environment_msgs__msg__Conductivity__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marine_environment_msgs, msg, Conductivity)() {
  return &_Conductivity__type_support;
}

#if defined(__cplusplus)
}
#endif
