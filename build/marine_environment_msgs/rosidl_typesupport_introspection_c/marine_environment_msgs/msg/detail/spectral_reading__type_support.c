// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marine_environment_msgs:msg/SpectralReading.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marine_environment_msgs/msg/detail/spectral_reading__rosidl_typesupport_introspection_c.h"
#include "marine_environment_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marine_environment_msgs/msg/detail/spectral_reading__functions.h"
#include "marine_environment_msgs/msg/detail/spectral_reading__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `channel_name`
// Member `unit`
#include "rosidl_runtime_c/string_functions.h"
// Member `wavelength_nm`
// Member `fwhm_nm`
// Member `intensity`
// Member `raw`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__SpectralReading_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marine_environment_msgs__msg__SpectralReading__init(message_memory);
}

void marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__SpectralReading_fini_function(void * message_memory)
{
  marine_environment_msgs__msg__SpectralReading__fini(message_memory);
}

size_t marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__size_function__SpectralReading__channel_name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__channel_name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__channel_name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__fetch_function__SpectralReading__channel_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__channel_name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__assign_function__SpectralReading__channel_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__channel_name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__resize_function__SpectralReading__channel_name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__size_function__SpectralReading__wavelength_nm(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__wavelength_nm(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__wavelength_nm(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__fetch_function__SpectralReading__wavelength_nm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__wavelength_nm(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__assign_function__SpectralReading__wavelength_nm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__wavelength_nm(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__resize_function__SpectralReading__wavelength_nm(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__size_function__SpectralReading__fwhm_nm(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__fwhm_nm(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__fwhm_nm(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__fetch_function__SpectralReading__fwhm_nm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__fwhm_nm(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__assign_function__SpectralReading__fwhm_nm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__fwhm_nm(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__resize_function__SpectralReading__fwhm_nm(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__size_function__SpectralReading__intensity(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__intensity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__intensity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__fetch_function__SpectralReading__intensity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__intensity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__assign_function__SpectralReading__intensity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__intensity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__resize_function__SpectralReading__intensity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__size_function__SpectralReading__raw(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__raw(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__raw(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__fetch_function__SpectralReading__raw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__raw(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__assign_function__SpectralReading__raw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__raw(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__resize_function__SpectralReading__raw(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__SpectralReading_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs__msg__SpectralReading, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "channel_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs__msg__SpectralReading, channel_name),  // bytes offset in struct
    NULL,  // default value
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__size_function__SpectralReading__channel_name,  // size() function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__channel_name,  // get_const(index) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__channel_name,  // get(index) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__fetch_function__SpectralReading__channel_name,  // fetch(index, &value) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__assign_function__SpectralReading__channel_name,  // assign(index, value) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__resize_function__SpectralReading__channel_name,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "wavelength_nm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs__msg__SpectralReading, wavelength_nm),  // bytes offset in struct
    NULL,  // default value
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__size_function__SpectralReading__wavelength_nm,  // size() function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__wavelength_nm,  // get_const(index) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__wavelength_nm,  // get(index) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__fetch_function__SpectralReading__wavelength_nm,  // fetch(index, &value) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__assign_function__SpectralReading__wavelength_nm,  // assign(index, value) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__resize_function__SpectralReading__wavelength_nm,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "fwhm_nm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs__msg__SpectralReading, fwhm_nm),  // bytes offset in struct
    NULL,  // default value
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__size_function__SpectralReading__fwhm_nm,  // size() function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__fwhm_nm,  // get_const(index) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__fwhm_nm,  // get(index) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__fetch_function__SpectralReading__fwhm_nm,  // fetch(index, &value) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__assign_function__SpectralReading__fwhm_nm,  // assign(index, value) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__resize_function__SpectralReading__fwhm_nm,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "intensity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs__msg__SpectralReading, intensity),  // bytes offset in struct
    NULL,  // default value
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__size_function__SpectralReading__intensity,  // size() function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__intensity,  // get_const(index) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__intensity,  // get(index) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__fetch_function__SpectralReading__intensity,  // fetch(index, &value) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__assign_function__SpectralReading__intensity,  // assign(index, value) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__resize_function__SpectralReading__intensity,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "raw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs__msg__SpectralReading, raw),  // bytes offset in struct
    NULL,  // default value
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__size_function__SpectralReading__raw,  // size() function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_const_function__SpectralReading__raw,  // get_const(index) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__get_function__SpectralReading__raw,  // get(index) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__fetch_function__SpectralReading__raw,  // fetch(index, &value) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__assign_function__SpectralReading__raw,  // assign(index, value) function pointer
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__resize_function__SpectralReading__raw,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "unit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs__msg__SpectralReading, unit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__SpectralReading_message_members = {
  "marine_environment_msgs__msg",  // message namespace
  "SpectralReading",  // message name
  7,  // number of fields
  sizeof(marine_environment_msgs__msg__SpectralReading),
  false,  // has_any_key_member_
  marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__SpectralReading_message_member_array,  // message members
  marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__SpectralReading_init_function,  // function to initialize message memory (memory has to be allocated)
  marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__SpectralReading_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__SpectralReading_message_type_support_handle = {
  0,
  &marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__SpectralReading_message_members,
  get_message_typesupport_handle_function,
  &marine_environment_msgs__msg__SpectralReading__get_type_hash,
  &marine_environment_msgs__msg__SpectralReading__get_type_description,
  &marine_environment_msgs__msg__SpectralReading__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marine_environment_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marine_environment_msgs, msg, SpectralReading)() {
  marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__SpectralReading_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__SpectralReading_message_type_support_handle.typesupport_identifier) {
    marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__SpectralReading_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marine_environment_msgs__msg__SpectralReading__rosidl_typesupport_introspection_c__SpectralReading_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
