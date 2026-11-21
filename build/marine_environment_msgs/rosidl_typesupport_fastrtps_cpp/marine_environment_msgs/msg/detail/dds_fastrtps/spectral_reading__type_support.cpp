// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from marine_environment_msgs:msg/SpectralReading.idl
// generated code does not contain a copyright notice
#include "marine_environment_msgs/msg/detail/spectral_reading__rosidl_typesupport_fastrtps_cpp.hpp"
#include "marine_environment_msgs/msg/detail/spectral_reading__functions.h"
#include "marine_environment_msgs/msg/detail/spectral_reading__struct.hpp"

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
#include "marine_environment_msgs/msg/detail/spectral_reading__rosidl_typesupport_fastrtps_c.h"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_with_endpoint(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &,
  const rmw_topic_endpoint_info_t &,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext &);
bool cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &,
  const rmw_topic_endpoint_info_t &,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext &);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace marine_environment_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
cdr_serialize(
  const marine_environment_msgs::msg::SpectralReading & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: channel_name
  {
    cdr << ros_message.channel_name;
  }

  // Member: wavelength_nm
  {
    cdr << ros_message.wavelength_nm;
  }

  // Member: fwhm_nm
  {
    cdr << ros_message.fwhm_nm;
  }

  // Member: intensity
  {
    cdr << ros_message.intensity;
  }

  // Member: raw
  {
    cdr << ros_message.raw;
  }

  // Member: unit
  cdr << ros_message.unit;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  marine_environment_msgs::msg::SpectralReading & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: channel_name
  {
    cdr >> ros_message.channel_name;
  }

  // Member: wavelength_nm
  {
    cdr >> ros_message.wavelength_nm;
  }

  // Member: fwhm_nm
  {
    cdr >> ros_message.fwhm_nm;
  }

  // Member: intensity
  {
    cdr >> ros_message.intensity;
  }

  // Member: raw
  {
    cdr >> ros_message.raw;
  }

  // Member: unit
  cdr >> ros_message.unit;

  return true;
}  // NOLINT(readability/fn_size)

// Endpoint-aware serialization. Always emitted so parent messages can recurse
// through non-Buffer intermediate message types.
bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
cdr_serialize_with_endpoint(
  const marine_environment_msgs::msg::SpectralReading & ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  try {
    // Member: header
    std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_with_endpoint(
      ros_message.header,
      cdr, endpoint_info, serialization_context);
    // Member: channel_name
    {
      cdr << ros_message.channel_name;
    }
    // Member: wavelength_nm
    {
      cdr << ros_message.wavelength_nm;
    }
    // Member: fwhm_nm
    {
      cdr << ros_message.fwhm_nm;
    }
    // Member: intensity
    {
      cdr << ros_message.intensity;
    }
    // Member: raw
    {
      cdr << ros_message.raw;
    }
    // Member: unit
    cdr << ros_message.unit;
  } catch (const std::exception & e) {
    RCUTILS_LOG_ERROR_NAMED(
      "marine_environment_msgs.typesupport_fastrtps_cpp",
      "cdr_serialize_with_endpoint failed: %s", e.what());
    return false;
  }
  return true;
}

// Endpoint-aware deserialization. Always emitted so parent messages can recurse
// through non-Buffer intermediate message types.
bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  marine_environment_msgs::msg::SpectralReading & ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize_with_endpoint(
    cdr,
    ros_message.header,
    endpoint_info,
    serialization_context);

  // Member: channel_name
  {
    cdr >> ros_message.channel_name;
  }

  // Member: wavelength_nm
  {
    cdr >> ros_message.wavelength_nm;
  }

  // Member: fwhm_nm
  {
    cdr >> ros_message.fwhm_nm;
  }

  // Member: intensity
  {
    cdr >> ros_message.intensity;
  }

  // Member: raw
  {
    cdr >> ros_message.raw;
  }

  // Member: unit
  cdr >> ros_message.unit;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
get_serialized_size(
  const marine_environment_msgs::msg::SpectralReading & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: channel_name
  {
    size_t array_size = ros_message.channel_name.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.channel_name[index].size() + 1);
    }
  }

  // Member: wavelength_nm
  {
    size_t array_size = ros_message.wavelength_nm.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.wavelength_nm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fwhm_nm
  {
    size_t array_size = ros_message.fwhm_nm.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.fwhm_nm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: intensity
  {
    size_t array_size = ros_message.intensity.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.intensity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: raw
  {
    size_t array_size = ros_message.raw.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.raw[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: unit
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.unit.size() + 1);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
max_serialized_size_SpectralReading(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: channel_name
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: wavelength_nm
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
  // Member: fwhm_nm
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
  // Member: intensity
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
  // Member: raw
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: unit
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_environment_msgs::msg::SpectralReading;
    is_plain =
      (
      offsetof(DataType, unit) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
cdr_serialize_key(
  const marine_environment_msgs::msg::SpectralReading & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: channel_name
  {
    cdr << ros_message.channel_name;
  }

  // Member: wavelength_nm
  {
    cdr << ros_message.wavelength_nm;
  }

  // Member: fwhm_nm
  {
    cdr << ros_message.fwhm_nm;
  }

  // Member: intensity
  {
    cdr << ros_message.intensity;
  }

  // Member: raw
  {
    cdr << ros_message.raw;
  }

  // Member: unit
  cdr << ros_message.unit;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
get_serialized_size_key(
  const marine_environment_msgs::msg::SpectralReading & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: channel_name
  {
    size_t array_size = ros_message.channel_name.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.channel_name[index].size() + 1);
    }
  }

  // Member: wavelength_nm
  {
    size_t array_size = ros_message.wavelength_nm.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.wavelength_nm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fwhm_nm
  {
    size_t array_size = ros_message.fwhm_nm.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.fwhm_nm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: intensity
  {
    size_t array_size = ros_message.intensity.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.intensity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: raw
  {
    size_t array_size = ros_message.raw.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.raw[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: unit
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.unit.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
max_serialized_size_key_SpectralReading(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: channel_name
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: wavelength_nm
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

  // Member: fwhm_nm
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

  // Member: intensity
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

  // Member: raw
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: unit
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_environment_msgs::msg::SpectralReading;
    is_plain =
      (
      offsetof(DataType, unit) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _SpectralReading__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const marine_environment_msgs::msg::SpectralReading *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SpectralReading__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<marine_environment_msgs::msg::SpectralReading *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SpectralReading__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const marine_environment_msgs::msg::SpectralReading *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SpectralReading__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SpectralReading(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

// Endpoint-aware serialization wrapper
static bool _SpectralReading__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  auto typed_message =
    static_cast<const marine_environment_msgs::msg::SpectralReading *>(
    untyped_ros_message);
  return cdr_serialize_with_endpoint(*typed_message, cdr, endpoint_info, serialization_context);
}

// Endpoint-aware deserialization wrapper
static bool _SpectralReading__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  auto typed_message =
    static_cast<marine_environment_msgs::msg::SpectralReading *>(
    untyped_ros_message);
  return cdr_deserialize_with_endpoint(cdr, *typed_message, endpoint_info, serialization_context);
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_environment_msgs
has_buffer_fields_SpectralReading()
{
  return has_buffer_fields_marine_environment_msgs__msg__SpectralReading();
}

static message_type_support_callbacks_t _SpectralReading__callbacks = {
  "marine_environment_msgs::msg",
  "SpectralReading",
  _SpectralReading__cdr_serialize,
  _SpectralReading__cdr_deserialize,
  _SpectralReading__get_serialized_size,
  _SpectralReading__max_serialized_size,
  nullptr,
  has_buffer_fields_SpectralReading(),
  _SpectralReading__cdr_serialize_with_endpoint,
  _SpectralReading__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _SpectralReading__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpectralReading__callbacks,
  get_message_typesupport_handle_function,
  &marine_environment_msgs__msg__SpectralReading__get_type_hash,
  &marine_environment_msgs__msg__SpectralReading__get_type_description,
  &marine_environment_msgs__msg__SpectralReading__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace marine_environment_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_marine_environment_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<marine_environment_msgs::msg::SpectralReading>()
{
  return &marine_environment_msgs::msg::typesupport_fastrtps_cpp::_SpectralReading__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, marine_environment_msgs, msg, SpectralReading)() {
  return &marine_environment_msgs::msg::typesupport_fastrtps_cpp::_SpectralReading__handle;
}

#ifdef __cplusplus
}
#endif
