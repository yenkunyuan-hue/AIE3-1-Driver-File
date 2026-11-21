// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marine_acoustic_msgs:msg/SonarImageData.idl
// generated code does not contain a copyright notice
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marine_acoustic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__struct.h"
#include "marine_acoustic_msgs/msg/detail/sonar_image_data__functions.h"
#include "fastcdr/Cdr.h"
#include "rosidl_typesupport_fastrtps_cpp/buffer_serialization.hpp"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // data

// forward declare type support functions


using _SonarImageData__ros_msg_type = marine_acoustic_msgs__msg__SonarImageData;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_marine_acoustic_msgs__msg__SonarImageData(
  const marine_acoustic_msgs__msg__SonarImageData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: is_bigendian
  {
    cdr << (ros_message->is_bigendian ? true : false);
  }

  // Field name: dtype
  {
    cdr << ros_message->dtype;
  }

  // Field name: beam_count
  {
    cdr << ros_message->beam_count;
  }

  // Field name: data
  {
    // Regular path CPU fallback for rosidl_buffer-backed uint8[]
    if (ros_message->data.is_rosidl_buffer) {
      auto * buffer = reinterpret_cast<const rosidl::Buffer<uint8_t> *>(ros_message->data.data);
      if (buffer == nullptr) {
        fprintf(stderr, "null rosidl_buffer pointer for field 'data'\n");
        return false;
      }
      if (buffer->get_backend_type() == "cpu") {
        cdr << static_cast<uint32_t>(buffer->size());
        if (buffer->size() > 0) {
          cdr.serialize_array(buffer->data(), buffer->size());
        }
      } else {
        const std::vector<uint8_t> vec = buffer->to_vector();
        cdr << vec;
      }
    } else {
      size_t size = ros_message->data.size;
      auto array_ptr = ros_message->data.data;
      cdr << static_cast<uint32_t>(size);
      cdr.serialize_array(array_ptr, size);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_deserialize_marine_acoustic_msgs__msg__SonarImageData(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__SonarImageData * ros_message)
{
  // Field name: is_bigendian
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_bigendian = tmp ? true : false;
  }

  // Field name: dtype
  {
    cdr >> ros_message->dtype;
  }

  // Field name: beam_count
  {
    cdr >> ros_message->beam_count;
  }

  // Field name: data
  {
    // Regular path CPU fallback for rosidl_buffer-backed uint8[]
    if (ros_message->data.is_rosidl_buffer) {
      auto * old_buffer = reinterpret_cast<rosidl::Buffer<uint8_t> *>(ros_message->data.data);
      delete old_buffer;
      ros_message->data.data = nullptr;
      ros_message->data.size = 0;
      ros_message->data.capacity = 0;
      ros_message->data.is_rosidl_buffer = false;
    }
    uint32_t seq_size = 0u;
    cdr >> seq_size;
    if (ros_message->data.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->data);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->data, seq_size)) {
      fprintf(stderr, "failed to create array for field 'data'");
      return false;
    }
    if (seq_size > 0) {
      cdr.deserialize_array(ros_message->data.data, seq_size);
    }
    ros_message->data.is_rosidl_buffer = false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t get_serialized_size_marine_acoustic_msgs__msg__SonarImageData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SonarImageData__ros_msg_type * ros_message = static_cast<const _SonarImageData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: is_bigendian
  {
    size_t item_size = sizeof(ros_message->is_bigendian);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dtype
  {
    size_t item_size = sizeof(ros_message->dtype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_count
  {
    size_t item_size = sizeof(ros_message->beam_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data
  {
    if (ros_message->data.is_rosidl_buffer) {
      auto * buffer = reinterpret_cast<const rosidl::Buffer<uint8_t> *>(ros_message->data.data);
      if (buffer != nullptr) {
        current_alignment +=
          rosidl_typesupport_fastrtps_cpp::get_buffer_serialized_size(
          *buffer, current_alignment);
      }
    } else {
      size_t array_size = ros_message->data.size;
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
      current_alignment += array_size * sizeof(uint8_t) +
        eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint8_t));
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t max_serialized_size_marine_acoustic_msgs__msg__SonarImageData(
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

  // Field name: is_bigendian
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dtype
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: beam_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_acoustic_msgs__msg__SonarImageData;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_key_marine_acoustic_msgs__msg__SonarImageData(
  const marine_acoustic_msgs__msg__SonarImageData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: is_bigendian
  {
    cdr << (ros_message->is_bigendian ? true : false);
  }

  // Field name: dtype
  {
    cdr << ros_message->dtype;
  }

  // Field name: beam_count
  {
    cdr << ros_message->beam_count;
  }

  // Field name: data
  {
    size_t size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
size_t get_serialized_size_key_marine_acoustic_msgs__msg__SonarImageData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SonarImageData__ros_msg_type * ros_message = static_cast<const _SonarImageData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: is_bigendian
  {
    size_t item_size = sizeof(ros_message->is_bigendian);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dtype
  {
    size_t item_size = sizeof(ros_message->dtype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: beam_count
  {
    size_t item_size = sizeof(ros_message->beam_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data
  {
    size_t array_size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
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
size_t max_serialized_size_key_marine_acoustic_msgs__msg__SonarImageData(
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
  // Field name: is_bigendian
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dtype
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: beam_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_acoustic_msgs__msg__SonarImageData;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SonarImageData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_acoustic_msgs__msg__SonarImageData * ros_message = static_cast<const marine_acoustic_msgs__msg__SonarImageData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_marine_acoustic_msgs__msg__SonarImageData(ros_message, cdr);
}

static bool _SonarImageData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_acoustic_msgs__msg__SonarImageData * ros_message = static_cast<marine_acoustic_msgs__msg__SonarImageData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_marine_acoustic_msgs__msg__SonarImageData(cdr, ros_message);
}

static uint32_t _SonarImageData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marine_acoustic_msgs__msg__SonarImageData(
      untyped_ros_message, 0));
}

static size_t _SonarImageData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marine_acoustic_msgs__msg__SonarImageData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__SonarImageData(
  const marine_acoustic_msgs__msg__SonarImageData * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: is_bigendian
  {
    cdr << (ros_message->is_bigendian ? true : false);
  }

  // Field name: dtype
  {
    cdr << ros_message->dtype;
  }

  // Field name: beam_count
  {
    cdr << ros_message->beam_count;
  }

  // Field name: data
  {
    rosidl_typesupport_fastrtps_cpp::serialize_buffer_or_c_sequence_with_endpoint(
      cdr, ros_message->data, endpoint_info, serialization_context);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__SonarImageData(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs__msg__SonarImageData * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: is_bigendian
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_bigendian = tmp ? true : false;
  }

  // Field name: dtype
  {
    cdr >> ros_message->dtype;
  }

  // Field name: beam_count
  {
    cdr >> ros_message->beam_count;
  }

  // Field name: data
  {
    if (!rosidl_typesupport_fastrtps_cpp::deserialize_buffer_or_c_sequence_with_endpoint(
        cdr, ros_message->data, endpoint_info, serialization_context))
    {
      fprintf(stderr, "Failed to deserialize buffer field 'data'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _SonarImageData__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_acoustic_msgs__msg__SonarImageData * ros_message =
    static_cast<const marine_acoustic_msgs__msg__SonarImageData *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_marine_acoustic_msgs__msg__SonarImageData(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _SonarImageData__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_acoustic_msgs__msg__SonarImageData * ros_message =
    static_cast<marine_acoustic_msgs__msg__SonarImageData *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_marine_acoustic_msgs__msg__SonarImageData(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_acoustic_msgs
bool has_buffer_fields_marine_acoustic_msgs__msg__SonarImageData()
{
  return
    true;
}

static message_type_support_callbacks_t __callbacks_SonarImageData = {
  "marine_acoustic_msgs::msg",
  "SonarImageData",
  _SonarImageData__cdr_serialize,
  _SonarImageData__cdr_deserialize,
  _SonarImageData__get_serialized_size,
  _SonarImageData__max_serialized_size,
  nullptr,
  has_buffer_fields_marine_acoustic_msgs__msg__SonarImageData(),
  _SonarImageData__cdr_serialize_with_endpoint,
  _SonarImageData__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _SonarImageData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SonarImageData,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__SonarImageData__get_type_hash,
  &marine_acoustic_msgs__msg__SonarImageData__get_type_description,
  &marine_acoustic_msgs__msg__SonarImageData__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marine_acoustic_msgs, msg, SonarImageData)() {
  return &_SonarImageData__type_support;
}

#if defined(__cplusplus)
}
#endif
