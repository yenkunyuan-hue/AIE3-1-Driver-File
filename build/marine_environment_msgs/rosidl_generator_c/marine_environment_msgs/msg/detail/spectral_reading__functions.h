// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from marine_environment_msgs:msg/SpectralReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/spectral_reading.h"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__FUNCTIONS_H_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "marine_environment_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "marine_environment_msgs/msg/detail/spectral_reading__struct.h"

/// Initialize msg/SpectralReading message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marine_environment_msgs__msg__SpectralReading
 * )) before or use
 * marine_environment_msgs__msg__SpectralReading__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
bool
marine_environment_msgs__msg__SpectralReading__init(marine_environment_msgs__msg__SpectralReading * msg);

/// Finalize msg/SpectralReading message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
void
marine_environment_msgs__msg__SpectralReading__fini(marine_environment_msgs__msg__SpectralReading * msg);

/// Create msg/SpectralReading message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marine_environment_msgs__msg__SpectralReading__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
marine_environment_msgs__msg__SpectralReading *
marine_environment_msgs__msg__SpectralReading__create(void);

/// Destroy msg/SpectralReading message.
/**
 * It calls
 * marine_environment_msgs__msg__SpectralReading__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
void
marine_environment_msgs__msg__SpectralReading__destroy(marine_environment_msgs__msg__SpectralReading * msg);

/// Check for msg/SpectralReading message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
bool
marine_environment_msgs__msg__SpectralReading__are_equal(const marine_environment_msgs__msg__SpectralReading * lhs, const marine_environment_msgs__msg__SpectralReading * rhs);

/// Copy a msg/SpectralReading message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
bool
marine_environment_msgs__msg__SpectralReading__copy(
  const marine_environment_msgs__msg__SpectralReading * input,
  marine_environment_msgs__msg__SpectralReading * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
const rosidl_type_hash_t *
marine_environment_msgs__msg__SpectralReading__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
const rosidl_runtime_c__type_description__TypeDescription *
marine_environment_msgs__msg__SpectralReading__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
const rosidl_runtime_c__type_description__TypeSource *
marine_environment_msgs__msg__SpectralReading__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
marine_environment_msgs__msg__SpectralReading__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/SpectralReading messages.
/**
 * It allocates the memory for the number of elements and calls
 * marine_environment_msgs__msg__SpectralReading__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
bool
marine_environment_msgs__msg__SpectralReading__Sequence__init(marine_environment_msgs__msg__SpectralReading__Sequence * array, size_t size);

/// Finalize array of msg/SpectralReading messages.
/**
 * It calls
 * marine_environment_msgs__msg__SpectralReading__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
void
marine_environment_msgs__msg__SpectralReading__Sequence__fini(marine_environment_msgs__msg__SpectralReading__Sequence * array);

/// Create array of msg/SpectralReading messages.
/**
 * It allocates the memory for the array and calls
 * marine_environment_msgs__msg__SpectralReading__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
marine_environment_msgs__msg__SpectralReading__Sequence *
marine_environment_msgs__msg__SpectralReading__Sequence__create(size_t size);

/// Destroy array of msg/SpectralReading messages.
/**
 * It calls
 * marine_environment_msgs__msg__SpectralReading__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
void
marine_environment_msgs__msg__SpectralReading__Sequence__destroy(marine_environment_msgs__msg__SpectralReading__Sequence * array);

/// Check for msg/SpectralReading message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
bool
marine_environment_msgs__msg__SpectralReading__Sequence__are_equal(const marine_environment_msgs__msg__SpectralReading__Sequence * lhs, const marine_environment_msgs__msg__SpectralReading__Sequence * rhs);

/// Copy an array of msg/SpectralReading messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_marine_environment_msgs
bool
marine_environment_msgs__msg__SpectralReading__Sequence__copy(
  const marine_environment_msgs__msg__SpectralReading__Sequence * input,
  marine_environment_msgs__msg__SpectralReading__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__FUNCTIONS_H_
