// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aanderaa_smart_sensor:msg/Density.idl
// generated code does not contain a copyright notice
#include "aanderaa_smart_sensor/msg/detail/density__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
aanderaa_smart_sensor__msg__Density__init(aanderaa_smart_sensor__msg__Density * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    aanderaa_smart_sensor__msg__Density__fini(msg);
    return false;
  }
  // density
  return true;
}

void
aanderaa_smart_sensor__msg__Density__fini(aanderaa_smart_sensor__msg__Density * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // density
}

bool
aanderaa_smart_sensor__msg__Density__are_equal(const aanderaa_smart_sensor__msg__Density * lhs, const aanderaa_smart_sensor__msg__Density * rhs)
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
aanderaa_smart_sensor__msg__Density__copy(
  const aanderaa_smart_sensor__msg__Density * input,
  aanderaa_smart_sensor__msg__Density * output)
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

aanderaa_smart_sensor__msg__Density *
aanderaa_smart_sensor__msg__Density__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aanderaa_smart_sensor__msg__Density * msg = (aanderaa_smart_sensor__msg__Density *)allocator.allocate(sizeof(aanderaa_smart_sensor__msg__Density), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aanderaa_smart_sensor__msg__Density));
  bool success = aanderaa_smart_sensor__msg__Density__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aanderaa_smart_sensor__msg__Density__destroy(aanderaa_smart_sensor__msg__Density * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aanderaa_smart_sensor__msg__Density__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aanderaa_smart_sensor__msg__Density__Sequence__init(aanderaa_smart_sensor__msg__Density__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aanderaa_smart_sensor__msg__Density * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(aanderaa_smart_sensor__msg__Density)) {
      return false;
    }
    data = (aanderaa_smart_sensor__msg__Density *)allocator.zero_allocate(size, sizeof(aanderaa_smart_sensor__msg__Density), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aanderaa_smart_sensor__msg__Density__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aanderaa_smart_sensor__msg__Density__fini(&data[i - 1]);
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
aanderaa_smart_sensor__msg__Density__Sequence__fini(aanderaa_smart_sensor__msg__Density__Sequence * array)
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
      aanderaa_smart_sensor__msg__Density__fini(&array->data[i]);
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

aanderaa_smart_sensor__msg__Density__Sequence *
aanderaa_smart_sensor__msg__Density__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aanderaa_smart_sensor__msg__Density__Sequence * array = (aanderaa_smart_sensor__msg__Density__Sequence *)allocator.allocate(sizeof(aanderaa_smart_sensor__msg__Density__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aanderaa_smart_sensor__msg__Density__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aanderaa_smart_sensor__msg__Density__Sequence__destroy(aanderaa_smart_sensor__msg__Density__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aanderaa_smart_sensor__msg__Density__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aanderaa_smart_sensor__msg__Density__Sequence__are_equal(const aanderaa_smart_sensor__msg__Density__Sequence * lhs, const aanderaa_smart_sensor__msg__Density__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aanderaa_smart_sensor__msg__Density__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aanderaa_smart_sensor__msg__Density__Sequence__copy(
  const aanderaa_smart_sensor__msg__Density__Sequence * input,
  aanderaa_smart_sensor__msg__Density__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(aanderaa_smart_sensor__msg__Density)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(aanderaa_smart_sensor__msg__Density);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aanderaa_smart_sensor__msg__Density * data =
      (aanderaa_smart_sensor__msg__Density *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aanderaa_smart_sensor__msg__Density__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aanderaa_smart_sensor__msg__Density__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aanderaa_smart_sensor__msg__Density__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
