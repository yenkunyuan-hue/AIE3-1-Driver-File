// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marine_environment_msgs:msg/Density.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/density.h"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__DENSITY__STRUCT_H_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__DENSITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Density in the package marine_environment_msgs.
typedef struct marine_environment_msgs__msg__Density
{
  std_msgs__msg__Header header;
  /// kg/m^3
  float density;
} marine_environment_msgs__msg__Density;

// Struct for a sequence of marine_environment_msgs__msg__Density.
typedef struct marine_environment_msgs__msg__Density__Sequence
{
  marine_environment_msgs__msg__Density * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marine_environment_msgs__msg__Density__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__DENSITY__STRUCT_H_
