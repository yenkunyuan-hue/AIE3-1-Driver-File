// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aanderaa_smart_sensor:msg/Density.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aanderaa_smart_sensor/msg/density.h"


#ifndef AANDERAA_SMART_SENSOR__MSG__DETAIL__DENSITY__STRUCT_H_
#define AANDERAA_SMART_SENSOR__MSG__DETAIL__DENSITY__STRUCT_H_

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

/// Struct defined in msg/Density in the package aanderaa_smart_sensor.
typedef struct aanderaa_smart_sensor__msg__Density
{
  std_msgs__msg__Header header;
  /// kg/m^3
  float density;
} aanderaa_smart_sensor__msg__Density;

// Struct for a sequence of aanderaa_smart_sensor__msg__Density.
typedef struct aanderaa_smart_sensor__msg__Density__Sequence
{
  aanderaa_smart_sensor__msg__Density * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aanderaa_smart_sensor__msg__Density__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AANDERAA_SMART_SENSOR__MSG__DETAIL__DENSITY__STRUCT_H_
