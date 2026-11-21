// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aanderaa_smart_sensor:msg/SoundSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aanderaa_smart_sensor/msg/sound_speed.h"


#ifndef AANDERAA_SMART_SENSOR__MSG__DETAIL__SOUND_SPEED__STRUCT_H_
#define AANDERAA_SMART_SENSOR__MSG__DETAIL__SOUND_SPEED__STRUCT_H_

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

/// Struct defined in msg/SoundSpeed in the package aanderaa_smart_sensor.
typedef struct aanderaa_smart_sensor__msg__SoundSpeed
{
  std_msgs__msg__Header header;
  /// m/s
  float sound_speed;
} aanderaa_smart_sensor__msg__SoundSpeed;

// Struct for a sequence of aanderaa_smart_sensor__msg__SoundSpeed.
typedef struct aanderaa_smart_sensor__msg__SoundSpeed__Sequence
{
  aanderaa_smart_sensor__msg__SoundSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aanderaa_smart_sensor__msg__SoundSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AANDERAA_SMART_SENSOR__MSG__DETAIL__SOUND_SPEED__STRUCT_H_
