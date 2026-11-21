// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from marine_environment_msgs:msg/SpectralReading.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "marine_environment_msgs/msg/detail/spectral_reading__functions.h"
#include "marine_environment_msgs/msg/detail/spectral_reading__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace marine_environment_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SpectralReading_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) marine_environment_msgs::msg::SpectralReading(_init);
}

void SpectralReading_fini_function(void * message_memory)
{
  auto typed_message = static_cast<marine_environment_msgs::msg::SpectralReading *>(message_memory);
  typed_message->~SpectralReading();
}

size_t size_function__SpectralReading__channel_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpectralReading__channel_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SpectralReading__channel_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpectralReading__channel_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SpectralReading__channel_name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SpectralReading__channel_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SpectralReading__channel_name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SpectralReading__channel_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SpectralReading__wavelength_nm(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpectralReading__wavelength_nm(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SpectralReading__wavelength_nm(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpectralReading__wavelength_nm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SpectralReading__wavelength_nm(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SpectralReading__wavelength_nm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SpectralReading__wavelength_nm(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SpectralReading__wavelength_nm(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SpectralReading__fwhm_nm(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpectralReading__fwhm_nm(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SpectralReading__fwhm_nm(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpectralReading__fwhm_nm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SpectralReading__fwhm_nm(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SpectralReading__fwhm_nm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SpectralReading__fwhm_nm(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SpectralReading__fwhm_nm(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SpectralReading__intensity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpectralReading__intensity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SpectralReading__intensity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpectralReading__intensity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SpectralReading__intensity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SpectralReading__intensity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SpectralReading__intensity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SpectralReading__intensity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SpectralReading__raw(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpectralReading__raw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SpectralReading__raw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpectralReading__raw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__SpectralReading__raw(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__SpectralReading__raw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__SpectralReading__raw(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__SpectralReading__raw(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpectralReading_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs::msg::SpectralReading, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "channel_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs::msg::SpectralReading, channel_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpectralReading__channel_name,  // size() function pointer
    get_const_function__SpectralReading__channel_name,  // get_const(index) function pointer
    get_function__SpectralReading__channel_name,  // get(index) function pointer
    fetch_function__SpectralReading__channel_name,  // fetch(index, &value) function pointer
    assign_function__SpectralReading__channel_name,  // assign(index, value) function pointer
    resize_function__SpectralReading__channel_name,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "wavelength_nm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs::msg::SpectralReading, wavelength_nm),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpectralReading__wavelength_nm,  // size() function pointer
    get_const_function__SpectralReading__wavelength_nm,  // get_const(index) function pointer
    get_function__SpectralReading__wavelength_nm,  // get(index) function pointer
    fetch_function__SpectralReading__wavelength_nm,  // fetch(index, &value) function pointer
    assign_function__SpectralReading__wavelength_nm,  // assign(index, value) function pointer
    resize_function__SpectralReading__wavelength_nm,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "fwhm_nm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs::msg::SpectralReading, fwhm_nm),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpectralReading__fwhm_nm,  // size() function pointer
    get_const_function__SpectralReading__fwhm_nm,  // get_const(index) function pointer
    get_function__SpectralReading__fwhm_nm,  // get(index) function pointer
    fetch_function__SpectralReading__fwhm_nm,  // fetch(index, &value) function pointer
    assign_function__SpectralReading__fwhm_nm,  // assign(index, value) function pointer
    resize_function__SpectralReading__fwhm_nm,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "intensity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs::msg::SpectralReading, intensity),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpectralReading__intensity,  // size() function pointer
    get_const_function__SpectralReading__intensity,  // get_const(index) function pointer
    get_function__SpectralReading__intensity,  // get(index) function pointer
    fetch_function__SpectralReading__intensity,  // fetch(index, &value) function pointer
    assign_function__SpectralReading__intensity,  // assign(index, value) function pointer
    resize_function__SpectralReading__intensity,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "raw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs::msg::SpectralReading, raw),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpectralReading__raw,  // size() function pointer
    get_const_function__SpectralReading__raw,  // get_const(index) function pointer
    get_function__SpectralReading__raw,  // get(index) function pointer
    fetch_function__SpectralReading__raw,  // fetch(index, &value) function pointer
    assign_function__SpectralReading__raw,  // assign(index, value) function pointer
    resize_function__SpectralReading__raw,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "unit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs::msg::SpectralReading, unit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpectralReading_message_members = {
  "marine_environment_msgs::msg",  // message namespace
  "SpectralReading",  // message name
  7,  // number of fields
  sizeof(marine_environment_msgs::msg::SpectralReading),
  false,  // has_any_key_member_
  SpectralReading_message_member_array,  // message members
  SpectralReading_init_function,  // function to initialize message memory (memory has to be allocated)
  SpectralReading_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpectralReading_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpectralReading_message_members,
  get_message_typesupport_handle_function,
  &marine_environment_msgs__msg__SpectralReading__get_type_hash,
  &marine_environment_msgs__msg__SpectralReading__get_type_description,
  &marine_environment_msgs__msg__SpectralReading__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace marine_environment_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<marine_environment_msgs::msg::SpectralReading>()
{
  return &::marine_environment_msgs::msg::rosidl_typesupport_introspection_cpp::SpectralReading_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marine_environment_msgs, msg, SpectralReading)() {
  return &::marine_environment_msgs::msg::rosidl_typesupport_introspection_cpp::SpectralReading_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
