// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marine_environment_msgs:msg/SpectralReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/spectral_reading.h"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__STRUCT_H_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__STRUCT_H_

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
// Member 'channel_name'
// Member 'unit'
#include "rosidl_runtime_c/string.h"
// Member 'wavelength_nm'
// Member 'fwhm_nm'
// Member 'intensity'
// Member 'raw'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SpectralReading in the package marine_environment_msgs.
/**
  * Generic point spectral sensor reading.
  * Arrays are aligned by index.
 */
typedef struct marine_environment_msgs__msg__SpectralReading
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence channel_name;
  rosidl_runtime_c__float__Sequence wavelength_nm;
  rosidl_runtime_c__float__Sequence fwhm_nm;
  rosidl_runtime_c__float__Sequence intensity;
  rosidl_runtime_c__uint16__Sequence raw;
  rosidl_runtime_c__String unit;
} marine_environment_msgs__msg__SpectralReading;

// Struct for a sequence of marine_environment_msgs__msg__SpectralReading.
typedef struct marine_environment_msgs__msg__SpectralReading__Sequence
{
  marine_environment_msgs__msg__SpectralReading * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marine_environment_msgs__msg__SpectralReading__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__STRUCT_H_
