// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from marine_acoustic_msgs:msg/ProjectedSonarImage.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__struct.h"
#include "marine_acoustic_msgs/msg/detail/projected_sonar_image__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "geometry_msgs/msg/detail/vector3__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool marine_acoustic_msgs__msg__ping_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * marine_acoustic_msgs__msg__ping_info__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
bool marine_acoustic_msgs__msg__sonar_image_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * marine_acoustic_msgs__msg__sonar_image_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool marine_acoustic_msgs__msg__projected_sonar_image__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("marine_acoustic_msgs.msg._projected_sonar_image", (char *)PyUnicode_1BYTE_DATA(module_attr), 47) == 0);
    assert(strncmp("ProjectedSonarImage", (char *)PyUnicode_1BYTE_DATA(name_attr), 19) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  marine_acoustic_msgs__msg__ProjectedSonarImage * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ping_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "ping_info");
    if (!field) {
      return false;
    }
    if (!marine_acoustic_msgs__msg__ping_info__convert_from_py(field, &ros_message->ping_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // beam_directions
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_directions");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'beam_directions'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!geometry_msgs__msg__Vector3__Sequence__init(&(ros_message->beam_directions), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Vector3__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__Vector3 * dest = ros_message->beam_directions.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__vector3__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // ranges
    PyObject * field = PyObject_GetAttrString(_pymsg, "ranges");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->ranges), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->ranges.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ranges'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->ranges), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->ranges.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // image
    PyObject * field = PyObject_GetAttrString(_pymsg, "image");
    if (!field) {
      return false;
    }
    if (!marine_acoustic_msgs__msg__sonar_image_data__convert_from_py(field, &ros_message->image)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * marine_acoustic_msgs__msg__projected_sonar_image__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ProjectedSonarImage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("marine_acoustic_msgs.msg._projected_sonar_image");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ProjectedSonarImage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  marine_acoustic_msgs__msg__ProjectedSonarImage * ros_message = (marine_acoustic_msgs__msg__ProjectedSonarImage *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ping_info
    PyObject * field = NULL;
    field = marine_acoustic_msgs__msg__ping_info__convert_to_py(&ros_message->ping_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ping_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beam_directions
    PyObject * field = NULL;
    size_t size = ros_message->beam_directions.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Vector3 * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->beam_directions.data[i]);
      PyObject * pyitem = geometry_msgs__msg__vector3__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "beam_directions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ranges
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "ranges");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->ranges.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->ranges.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->ranges.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // image
    PyObject * field = NULL;
    field = marine_acoustic_msgs__msg__sonar_image_data__convert_to_py(&ros_message->image);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
