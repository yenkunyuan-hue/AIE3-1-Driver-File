// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marine_environment_msgs:msg/Turbidity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marine_environment_msgs/msg/detail/turbidity__rosidl_typesupport_introspection_c.h"
#include "marine_environment_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marine_environment_msgs/msg/detail/turbidity__functions.h"
#include "marine_environment_msgs/msg/detail/turbidity__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marine_environment_msgs__msg__Turbidity__rosidl_typesupport_introspection_c__Turbidity_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marine_environment_msgs__msg__Turbidity__init(message_memory);
}

void marine_environment_msgs__msg__Turbidity__rosidl_typesupport_introspection_c__Turbidity_fini_function(void * message_memory)
{
  marine_environment_msgs__msg__Turbidity__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember marine_environment_msgs__msg__Turbidity__rosidl_typesupport_introspection_c__Turbidity_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs__msg__Turbidity, header),  // bytes offset in struct
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
    "ntu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marine_environment_msgs__msg__Turbidity, ntu),  // bytes offset in struct
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

static const rosidl_typesupport_introspection_c__MessageMembers marine_environment_msgs__msg__Turbidity__rosidl_typesupport_introspection_c__Turbidity_message_members = {
  "marine_environment_msgs__msg",  // message namespace
  "Turbidity",  // message name
  2,  // number of fields
  sizeof(marine_environment_msgs__msg__Turbidity),
  false,  // has_any_key_member_
  marine_environment_msgs__msg__Turbidity__rosidl_typesupport_introspection_c__Turbidity_message_member_array,  // message members
  marine_environment_msgs__msg__Turbidity__rosidl_typesupport_introspection_c__Turbidity_init_function,  // function to initialize message memory (memory has to be allocated)
  marine_environment_msgs__msg__Turbidity__rosidl_typesupport_introspection_c__Turbidity_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marine_environment_msgs__msg__Turbidity__rosidl_typesupport_introspection_c__Turbidity_message_type_support_handle = {
  0,
  &marine_environment_msgs__msg__Turbidity__rosidl_typesupport_introspection_c__Turbidity_message_members,
  get_message_typesupport_handle_function,
  &marine_environment_msgs__msg__Turbidity__get_type_hash,
  &marine_environment_msgs__msg__Turbidity__get_type_description,
  &marine_environment_msgs__msg__Turbidity__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marine_environment_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marine_environment_msgs, msg, Turbidity)() {
  marine_environment_msgs__msg__Turbidity__rosidl_typesupport_introspection_c__Turbidity_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!marine_environment_msgs__msg__Turbidity__rosidl_typesupport_introspection_c__Turbidity_message_type_support_handle.typesupport_identifier) {
    marine_environment_msgs__msg__Turbidity__rosidl_typesupport_introspection_c__Turbidity_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marine_environment_msgs__msg__Turbidity__rosidl_typesupport_introspection_c__Turbidity_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
