// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aanderaa_smart_sensor:msg/Conductivity.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aanderaa_smart_sensor/msg/detail/conductivity__functions.h"
#include "aanderaa_smart_sensor/msg/detail/conductivity__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aanderaa_smart_sensor
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Conductivity_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aanderaa_smart_sensor::msg::Conductivity(_init);
}

void Conductivity_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aanderaa_smart_sensor::msg::Conductivity *>(message_memory);
  typed_message->~Conductivity();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Conductivity_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aanderaa_smart_sensor::msg::Conductivity, header),  // bytes offset in struct
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
    "conductivity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aanderaa_smart_sensor::msg::Conductivity, conductivity),  // bytes offset in struct
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
    "salinity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aanderaa_smart_sensor::msg::Conductivity, salinity),  // bytes offset in struct
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

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Conductivity_message_members = {
  "aanderaa_smart_sensor::msg",  // message namespace
  "Conductivity",  // message name
  3,  // number of fields
  sizeof(aanderaa_smart_sensor::msg::Conductivity),
  false,  // has_any_key_member_
  Conductivity_message_member_array,  // message members
  Conductivity_init_function,  // function to initialize message memory (memory has to be allocated)
  Conductivity_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Conductivity_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Conductivity_message_members,
  get_message_typesupport_handle_function,
  &aanderaa_smart_sensor__msg__Conductivity__get_type_hash,
  &aanderaa_smart_sensor__msg__Conductivity__get_type_description,
  &aanderaa_smart_sensor__msg__Conductivity__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aanderaa_smart_sensor


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aanderaa_smart_sensor::msg::Conductivity>()
{
  return &::aanderaa_smart_sensor::msg::rosidl_typesupport_introspection_cpp::Conductivity_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aanderaa_smart_sensor, msg, Conductivity)() {
  return &::aanderaa_smart_sensor::msg::rosidl_typesupport_introspection_cpp::Conductivity_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
