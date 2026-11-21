// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marine_environment_msgs:msg/SoundSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/sound_speed.h"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SOUND_SPEED__STRUCT_H_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SOUND_SPEED__STRUCT_H_

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

/// Struct defined in msg/SoundSpeed in the package marine_environment_msgs.
typedef struct marine_environment_msgs__msg__SoundSpeed
{
  std_msgs__msg__Header header;
  /// m/s
  float sound_speed;
} marine_environment_msgs__msg__SoundSpeed;

// Struct for a sequence of marine_environment_msgs__msg__SoundSpeed.
typedef struct marine_environment_msgs__msg__SoundSpeed__Sequence
{
  marine_environment_msgs__msg__SoundSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marine_environment_msgs__msg__SoundSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SOUND_SPEED__STRUCT_H_
