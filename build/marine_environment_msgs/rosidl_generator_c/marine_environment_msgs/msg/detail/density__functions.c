// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from marine_environment_msgs:msg/Density.idl
// generated code does not contain a copyright notice
#include "marine_environment_msgs/msg/detail/density__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
marine_environment_msgs__msg__Density__init(marine_environment_msgs__msg__Density * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    marine_environment_msgs__msg__Density__fini(msg);
    return false;
  }
  // density
  return true;
}

void
marine_environment_msgs__msg__Density__fini(marine_environment_msgs__msg__Density * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // density
}

bool
marine_environment_msgs__msg__Density__are_equal(const marine_environment_msgs__msg__Density * lhs, const marine_environment_msgs__msg__Density * rhs)
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
  // density
  if (lhs->density != rhs->density) {
    return false;
  }
  return true;
}

bool
marine_environment_msgs__msg__Density__copy(
  const marine_environment_msgs__msg__Density * input,
  marine_environment_msgs__msg__Density * output)
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
  // density
  output->density = input->density;
  return true;
}

marine_environment_msgs__msg__Density *
marine_environment_msgs__msg__Density__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_environment_msgs__msg__Density * msg = (marine_environment_msgs__msg__Density *)allocator.allocate(sizeof(marine_environment_msgs__msg__Density), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(marine_environment_msgs__msg__Density));
  bool success = marine_environment_msgs__msg__Density__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
marine_environment_msgs__msg__Density__destroy(marine_environment_msgs__msg__Density * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    marine_environment_msgs__msg__Density__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
marine_environment_msgs__msg__Density__Sequence__init(marine_environment_msgs__msg__Density__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_environment_msgs__msg__Density * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(marine_environment_msgs__msg__Density)) {
      return false;
    }
    data = (marine_environment_msgs__msg__Density *)allocator.zero_allocate(size, sizeof(marine_environment_msgs__msg__Density), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = marine_environment_msgs__msg__Density__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        marine_environment_msgs__msg__Density__fini(&data[i - 1]);
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
marine_environment_msgs__msg__Density__Sequence__fini(marine_environment_msgs__msg__Density__Sequence * array)
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
      marine_environment_msgs__msg__Density__fini(&array->data[i]);
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

marine_environment_msgs__msg__Density__Sequence *
marine_environment_msgs__msg__Density__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  marine_environment_msgs__msg__Density__Sequence * array = (marine_environment_msgs__msg__Density__Sequence *)allocator.allocate(sizeof(marine_environment_msgs__msg__Density__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = marine_environment_msgs__msg__Density__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
marine_environment_msgs__msg__Density__Sequence__destroy(marine_environment_msgs__msg__Density__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    marine_environment_msgs__msg__Density__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
marine_environment_msgs__msg__Density__Sequence__are_equal(const marine_environment_msgs__msg__Density__Sequence * lhs, const marine_environment_msgs__msg__Density__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!marine_environment_msgs__msg__Density__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
marine_environment_msgs__msg__Density__Sequence__copy(
  const marine_environment_msgs__msg__Density__Sequence * input,
  marine_environment_msgs__msg__Density__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(marine_environment_msgs__msg__Density)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(marine_environment_msgs__msg__Density);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    marine_environment_msgs__msg__Density * data =
      (marine_environment_msgs__msg__Density *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!marine_environment_msgs__msg__Density__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          marine_environment_msgs__msg__Density__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!marine_environment_msgs__msg__Density__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
