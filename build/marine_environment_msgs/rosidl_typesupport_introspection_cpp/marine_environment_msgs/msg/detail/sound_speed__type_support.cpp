// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from marine_environment_msgs:msg/SoundSpeed.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "marine_environment_msgs/msg/detail/sound_speed__functions.h"
#include "marine_environment_msgs/msg/detail/sound_speed__struct.hpp"
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

void SoundSpeed_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) marine_environment_msgs::msg::SoundSpeed(_init);
}

void SoundSpeed_fini_function(void * message_memory)
{
  auto typed_message = static_cast<marine_environment_msgs::msg::SoundSpeed *>(message_memory);
  typed_message->~SoundSpeed();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SoundSpeed_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs::msg::SoundSpeed, header),  // bytes offset in struct
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
    "sound_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs::msg::SoundSpeed, sound_speed),  // bytes offset in struct
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

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SoundSpeed_message_members = {
  "marine_environment_msgs::msg",  // message namespace
  "SoundSpeed",  // message name
  2,  // number of fields
  sizeof(marine_environment_msgs::msg::SoundSpeed),
  false,  // has_any_key_member_
  SoundSpeed_message_member_array,  // message members
  SoundSpeed_init_function,  // function to initialize message memory (memory has to be allocated)
  SoundSpeed_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SoundSpeed_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SoundSpeed_message_members,
  get_message_typesupport_handle_function,
  &marine_environment_msgs__msg__SoundSpeed__get_type_hash,
  &marine_environment_msgs__msg__SoundSpeed__get_type_description,
  &marine_environment_msgs__msg__SoundSpeed__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace marine_environment_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<marine_environment_msgs::msg::SoundSpeed>()
{
  return &::marine_environment_msgs::msg::rosidl_typesupport_introspection_cpp::SoundSpeed_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, marine_environment_msgs, msg, SoundSpeed)() {
  return &::marine_environment_msgs::msg::rosidl_typesupport_introspection_cpp::SoundSpeed_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
