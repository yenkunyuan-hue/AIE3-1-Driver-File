// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marine_environment_msgs:msg/SpectralReading.idl
// generated code does not contain a copyright notice
#include "marine_environment_msgs/msg/detail/spectral_reading__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marine_environment_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marine_environment_msgs/msg/detail/spectral_reading__struct.h"
#include "marine_environment_msgs/msg/detail/spectral_reading__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // fwhm_nm, intensity, raw, wavelength_nm
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // fwhm_nm, intensity, raw, wavelength_nm
#include "rosidl_runtime_c/string.h"  // channel_name, unit
#include "rosidl_runtime_c/string_functions.h"  // channel_name, unit
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


using _SpectralReading__ros_msg_type = marine_environment_msgs__msg__SpectralReading;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool cdr_serialize_marine_environment_msgs__msg__SpectralReading(
  const marine_environment_msgs__msg__SpectralReading * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: channel_name
  {
    size_t size = ros_message->channel_name.size;
    auto array_ptr = ros_message->channel_name.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: wavelength_nm
  {
    size_t size = ros_message->wavelength_nm.size;
    auto array_ptr = ros_message->wavelength_nm.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: fwhm_nm
  {
    size_t size = ros_message->fwhm_nm.size;
    auto array_ptr = ros_message->fwhm_nm.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: intensity
  {
    size_t size = ros_message->intensity.size;
    auto array_ptr = ros_message->intensity.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: raw
  {
    size_t size = ros_message->raw.size;
    auto array_ptr = ros_message->raw.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: unit
  {
    const rosidl_runtime_c__String * str = &ros_message->unit;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool cdr_deserialize_marine_environment_msgs__msg__SpectralReading(
  eprosima::fastcdr::Cdr & cdr,
  marine_environment_msgs__msg__SpectralReading * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: channel_name
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

    if (ros_message->channel_name.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->channel_name);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->channel_name, size)) {
      fprintf(stderr, "failed to create array for field 'channel_name'");
      return false;
    }
    auto array_ptr = ros_message->channel_name.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(&ros_i, tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'channel_name'\n");
        return false;
      }
    }
  }

  // Field name: wavelength_nm
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

    if (ros_message->wavelength_nm.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->wavelength_nm);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->wavelength_nm, size)) {
      fprintf(stderr, "failed to create array for field 'wavelength_nm'");
      return false;
    }
    auto array_ptr = ros_message->wavelength_nm.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: fwhm_nm
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

    if (ros_message->fwhm_nm.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->fwhm_nm);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->fwhm_nm, size)) {
      fprintf(stderr, "failed to create array for field 'fwhm_nm'");
      return false;
    }
    auto array_ptr = ros_message->fwhm_nm.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: intensity
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

    if (ros_message->intensity.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->intensity);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->intensity, size)) {
      fprintf(stderr, "failed to create array for field 'intensity'");
      return false;
    }
    auto array_ptr = ros_message->intensity.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: raw
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

    if (ros_message->raw.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->raw);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->raw, size)) {
      fprintf(stderr, "failed to create array for field 'raw'");
      return false;
    }
    auto array_ptr = ros_message->raw.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: unit
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->unit.data) {
      rosidl_runtime_c__String__init(&ros_message->unit);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->unit,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'unit'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
size_t get_serialized_size_marine_environment_msgs__msg__SpectralReading(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpectralReading__ros_msg_type * ros_message = static_cast<const _SpectralReading__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: channel_name
  {
    size_t array_size = ros_message->channel_name.size;
    auto array_ptr = ros_message->channel_name.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: wavelength_nm
  {
    size_t array_size = ros_message->wavelength_nm.size;
    auto array_ptr = ros_message->wavelength_nm.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fwhm_nm
  {
    size_t array_size = ros_message->fwhm_nm.size;
    auto array_ptr = ros_message->fwhm_nm.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: intensity
  {
    size_t array_size = ros_message->intensity.size;
    auto array_ptr = ros_message->intensity.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: raw
  {
    size_t array_size = ros_message->raw.size;
    auto array_ptr = ros_message->raw.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: unit
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->unit.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
size_t max_serialized_size_marine_environment_msgs__msg__SpectralReading(
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

  // Field name: channel_name
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

  // Field name: wavelength_nm
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

  // Field name: fwhm_nm
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

  // Field name: intensity
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

  // Field name: raw
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

  // Field name: unit
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
    using DataType = marine_environment_msgs__msg__SpectralReading;
    is_plain =
      (
      offsetof(DataType, unit) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool cdr_serialize_key_marine_environment_msgs__msg__SpectralReading(
  const marine_environment_msgs__msg__SpectralReading * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: channel_name
  {
    size_t size = ros_message->channel_name.size;
    auto array_ptr = ros_message->channel_name.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: wavelength_nm
  {
    size_t size = ros_message->wavelength_nm.size;
    auto array_ptr = ros_message->wavelength_nm.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: fwhm_nm
  {
    size_t size = ros_message->fwhm_nm.size;
    auto array_ptr = ros_message->fwhm_nm.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: intensity
  {
    size_t size = ros_message->intensity.size;
    auto array_ptr = ros_message->intensity.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: raw
  {
    size_t size = ros_message->raw.size;
    auto array_ptr = ros_message->raw.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: unit
  {
    const rosidl_runtime_c__String * str = &ros_message->unit;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
size_t get_serialized_size_key_marine_environment_msgs__msg__SpectralReading(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpectralReading__ros_msg_type * ros_message = static_cast<const _SpectralReading__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: channel_name
  {
    size_t array_size = ros_message->channel_name.size;
    auto array_ptr = ros_message->channel_name.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: wavelength_nm
  {
    size_t array_size = ros_message->wavelength_nm.size;
    auto array_ptr = ros_message->wavelength_nm.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fwhm_nm
  {
    size_t array_size = ros_message->fwhm_nm.size;
    auto array_ptr = ros_message->fwhm_nm.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: intensity
  {
    size_t array_size = ros_message->intensity.size;
    auto array_ptr = ros_message->intensity.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: raw
  {
    size_t array_size = ros_message->raw.size;
    auto array_ptr = ros_message->raw.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: unit
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->unit.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
size_t max_serialized_size_key_marine_environment_msgs__msg__SpectralReading(
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

  // Field name: channel_name
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

  // Field name: wavelength_nm
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

  // Field name: fwhm_nm
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

  // Field name: intensity
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

  // Field name: raw
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

  // Field name: unit
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
    using DataType = marine_environment_msgs__msg__SpectralReading;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_environment_msgs__msg__SpectralReading * ros_message = static_cast<const marine_environment_msgs__msg__SpectralReading *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_marine_environment_msgs__msg__SpectralReading(ros_message, cdr);
}

static bool _SpectralReading__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_environment_msgs__msg__SpectralReading * ros_message = static_cast<marine_environment_msgs__msg__SpectralReading *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_marine_environment_msgs__msg__SpectralReading(cdr, ros_message);
}

static uint32_t _SpectralReading__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marine_environment_msgs__msg__SpectralReading(
      untyped_ros_message, 0));
}

static size_t _SpectralReading__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marine_environment_msgs__msg__SpectralReading(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool cdr_serialize_with_endpoint_marine_environment_msgs__msg__SpectralReading(
  const marine_environment_msgs__msg__SpectralReading * ros_message,
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

  // Field name: channel_name
  {
    size_t size = ros_message->channel_name.size;
    auto array_ptr = ros_message->channel_name.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: wavelength_nm
  {
    size_t size = ros_message->wavelength_nm.size;
    auto array_ptr = ros_message->wavelength_nm.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: fwhm_nm
  {
    size_t size = ros_message->fwhm_nm.size;
    auto array_ptr = ros_message->fwhm_nm.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: intensity
  {
    size_t size = ros_message->intensity.size;
    auto array_ptr = ros_message->intensity.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: raw
  {
    size_t size = ros_message->raw.size;
    auto array_ptr = ros_message->raw.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: unit
  {
    const rosidl_runtime_c__String * str = &ros_message->unit;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool cdr_deserialize_with_endpoint_marine_environment_msgs__msg__SpectralReading(
  eprosima::fastcdr::Cdr & cdr,
  marine_environment_msgs__msg__SpectralReading * ros_message,
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

  // Field name: channel_name
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

    if (ros_message->channel_name.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->channel_name);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->channel_name, size)) {
      fprintf(stderr, "failed to create array for field 'channel_name'");
      return false;
    }
    auto array_ptr = ros_message->channel_name.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(&ros_i, tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'channel_name'\n");
        return false;
      }
    }
  }

  // Field name: wavelength_nm
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

    if (ros_message->wavelength_nm.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->wavelength_nm);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->wavelength_nm, size)) {
      fprintf(stderr, "failed to create array for field 'wavelength_nm'");
      return false;
    }
    auto array_ptr = ros_message->wavelength_nm.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: fwhm_nm
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

    if (ros_message->fwhm_nm.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->fwhm_nm);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->fwhm_nm, size)) {
      fprintf(stderr, "failed to create array for field 'fwhm_nm'");
      return false;
    }
    auto array_ptr = ros_message->fwhm_nm.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: intensity
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

    if (ros_message->intensity.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->intensity);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->intensity, size)) {
      fprintf(stderr, "failed to create array for field 'intensity'");
      return false;
    }
    auto array_ptr = ros_message->intensity.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: raw
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

    if (ros_message->raw.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->raw);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->raw, size)) {
      fprintf(stderr, "failed to create array for field 'raw'");
      return false;
    }
    auto array_ptr = ros_message->raw.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: unit
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->unit.data) {
      rosidl_runtime_c__String__init(&ros_message->unit);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->unit,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'unit'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _SpectralReading__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const marine_environment_msgs__msg__SpectralReading * ros_message =
    static_cast<const marine_environment_msgs__msg__SpectralReading *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_marine_environment_msgs__msg__SpectralReading(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _SpectralReading__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  marine_environment_msgs__msg__SpectralReading * ros_message =
    static_cast<marine_environment_msgs__msg__SpectralReading *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_marine_environment_msgs__msg__SpectralReading(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marine_environment_msgs
bool has_buffer_fields_marine_environment_msgs__msg__SpectralReading()
{
  return
    has_buffer_fields_std_msgs__msg__Header();
}

static message_type_support_callbacks_t __callbacks_SpectralReading = {
  "marine_environment_msgs::msg",
  "SpectralReading",
  _SpectralReading__cdr_serialize,
  _SpectralReading__cdr_deserialize,
  _SpectralReading__get_serialized_size,
  _SpectralReading__max_serialized_size,
  nullptr,
  has_buffer_fields_marine_environment_msgs__msg__SpectralReading(),
  _SpectralReading__cdr_serialize_with_endpoint,
  _SpectralReading__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _SpectralReading__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpectralReading,
  get_message_typesupport_handle_function,
  &marine_environment_msgs__msg__SpectralReading__get_type_hash,
  &marine_environment_msgs__msg__SpectralReading__get_type_description,
  &marine_environment_msgs__msg__SpectralReading__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marine_environment_msgs, msg, SpectralReading)() {
  return &_SpectralReading__type_support;
}

#if defined(__cplusplus)
}
#endif
