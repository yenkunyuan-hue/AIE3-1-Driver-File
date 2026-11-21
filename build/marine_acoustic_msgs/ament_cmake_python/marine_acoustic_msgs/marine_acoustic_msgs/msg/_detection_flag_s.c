// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from marine_acoustic_msgs:msg/DetectionFlag.idl
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
#include "marine_acoustic_msgs/msg/detail/detection_flag__struct.h"
#include "marine_acoustic_msgs/msg/detail/detection_flag__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool marine_acoustic_msgs__msg__detection_flag__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("marine_acoustic_msgs.msg._detection_flag", (char *)PyUnicode_1BYTE_DATA(module_attr), 40) == 0);
    assert(strncmp("DetectionFlag", (char *)PyUnicode_1BYTE_DATA(name_attr), 13) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  marine_acoustic_msgs__msg__DetectionFlag * ros_message = _ros_message;
  {  // flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * marine_acoustic_msgs__msg__detection_flag__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DetectionFlag */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("marine_acoustic_msgs.msg._detection_flag");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DetectionFlag");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  marine_acoustic_msgs__msg__DetectionFlag * ros_message = (marine_acoustic_msgs__msg__DetectionFlag *)raw_ros_message;
  {  // flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
