// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marine_environment_msgs:msg/SpectralReading.idl
// generated code does not contain a copyright notice
#include "marine_environment_msgs/msg/detail/spectral_reading__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `channel_name`
// Member `unit`
#include "rosidl_runtime_c/string_functions.h"
// Member `wavelength_nm`
// Member `fwhm_nm`
// Member `intensity`
// Member `raw`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
marine_environment_msgs__msg__SpectralReading__init(marine_environment_msgs__msg__SpectralReading * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marine_environment_msgs__msg__SpectralReading__fini(msg);
    return false;
  }
  // channel_name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->channel_name, 0)) {
    marine_environment_msgs__msg__SpectralReading__fini(msg);
    return false;
  }
  // wavelength_nm
  if (!rosidl_runtime_c__float__Sequence__init(&msg->wavelength_nm, 0)) {
    marine_environment_msgs__msg__SpectralReading__fini(msg);
    return false;
  }
  // fwhm_nm
  if (!rosidl_runtime_c__float__Sequence__init(&msg->fwhm_nm, 0)) {
    marine_environment_msgs__msg__SpectralReading__fini(msg);
    return false;
  }
  // intensity
  if (!rosidl_runtime_c__float__Sequence__init(&msg->intensity, 0)) {
    marine_environment_msgs__msg__SpectralReading__fini(msg);
    return false;
  }
  // raw
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->raw, 0)) {
    marine_environment_msgs__msg__SpectralReading__fini(msg);
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__init(&msg->unit)) {
    marine_environment_msgs__msg__SpectralReading__fini(msg);
    return false;
  }
  return true;
}

void
marine_environment_msgs__msg__SpectralReading__fini(marine_environment_msgs__msg__SpectralReading * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // channel_name
  rosidl_runtime_c__String__Sequence__fini(&msg->channel_name);
  // wavelength_nm
  rosidl_runtime_c__float__Sequence__fini(&msg->wavelength_nm);
  // fwhm_nm
  rosidl_runtime_c__float__Sequence__fini(&msg->fwhm_nm);
  // intensity
  rosidl_runtime_c__float__Sequence__fini(&msg->intensity);
  // raw
  rosidl_runtime_c__uint16__Sequence__fini(&msg->raw);
  // unit
  rosidl_runtime_c__String__fini(&msg->unit);
}

bool
marine_environment_msgs__msg__SpectralReading__are_equal(const marine_environment_msgs__msg__SpectralReading * lhs, const marine_environment_msgs__msg__SpectralReading * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // channel_name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->channel_name), &(rhs->channel_name)))
  {
    return false;
  }
  // wavelength_nm
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->wavelength_nm), &(rhs->wavelength_nm)))
  {
    return false;
  }
  // fwhm_nm
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->fwhm_nm), &(rhs->fwhm_nm)))
  {
    return false;
  }
  // intensity
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->intensity), &(rhs->intensity)))
  {
    return false;
  }
  // raw
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->raw), &(rhs->raw)))
  {
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->unit), &(rhs->unit)))
  {
    return false;
  }
  return true;
}

bool
marine_environment_msgs__msg__SpectralReading__copy(
  const marine_environment_msgs__msg__SpectralReading * input,
  marine_environment_msgs__msg__SpectralReading * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // channel_name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->channel_name), &(output->channel_name)))
  {
    return false;
  }
  // wavelength_nm
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->wavelength_nm), &(output->wavelength_nm)))
  {
    return false;
  }
  // fwhm_nm
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->fwhm_nm), &(output->fwhm_nm)))
  {
    return false;
  }
  // intensity
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->intensity), &(output->intensity)))
  {
    return false;
  }
  // raw
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->raw), &(output->raw)))
  {
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__copy(
      &(input->unit), &(output->unit)))
  {
    return false;
  }
  return true;
}

marine_environment_msgs__msg__SpectralReading *
marine_environment_msgs__msg__SpectralReading__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_environment_msgs__msg__SpectralReading * msg = (marine_environment_msgs__msg__SpectralReading *)allocator.allocate(sizeof(marine_environment_msgs__msg__SpectralReading), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marine_environment_msgs__msg__SpectralReading));
  bool success = marine_environment_msgs__msg__SpectralReading__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marine_environment_msgs__msg__SpectralReading__destroy(marine_environment_msgs__msg__SpectralReading * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marine_environment_msgs__msg__SpectralReading__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marine_environment_msgs__msg__SpectralReading__Sequence__init(marine_environment_msgs__msg__SpectralReading__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_environment_msgs__msg__SpectralReading * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(marine_environment_msgs__msg__SpectralReading)) {
      return false;
    }
    data = (marine_environment_msgs__msg__SpectralReading *)allocator.zero_allocate(size, sizeof(marine_environment_msgs__msg__SpectralReading), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marine_environment_msgs__msg__SpectralReading__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marine_environment_msgs__msg__SpectralReading__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
marine_environment_msgs__msg__SpectralReading__Sequence__fini(marine_environment_msgs__msg__SpectralReading__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      marine_environment_msgs__msg__SpectralReading__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

marine_environment_msgs__msg__SpectralReading__Sequence *
marine_environment_msgs__msg__SpectralReading__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_environment_msgs__msg__SpectralReading__Sequence * array = (marine_environment_msgs__msg__SpectralReading__Sequence *)allocator.allocate(sizeof(marine_environment_msgs__msg__SpectralReading__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marine_environment_msgs__msg__SpectralReading__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marine_environment_msgs__msg__SpectralReading__Sequence__destroy(marine_environment_msgs__msg__SpectralReading__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marine_environment_msgs__msg__SpectralReading__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marine_environment_msgs__msg__SpectralReading__Sequence__are_equal(const marine_environment_msgs__msg__SpectralReading__Sequence * lhs, const marine_environment_msgs__msg__SpectralReading__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marine_environment_msgs__msg__SpectralReading__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marine_environment_msgs__msg__SpectralReading__Sequence__copy(
  const marine_environment_msgs__msg__SpectralReading__Sequence * input,
  marine_environment_msgs__msg__SpectralReading__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(marine_environment_msgs__msg__SpectralReading)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(marine_environment_msgs__msg__SpectralReading);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marine_environment_msgs__msg__SpectralReading * data =
      (marine_environment_msgs__msg__SpectralReading *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marine_environment_msgs__msg__SpectralReading__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marine_environment_msgs__msg__SpectralReading__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marine_environment_msgs__msg__SpectralReading__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
