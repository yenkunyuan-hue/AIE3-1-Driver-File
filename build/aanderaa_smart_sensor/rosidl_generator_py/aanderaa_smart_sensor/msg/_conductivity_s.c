// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aanderaa_smart_sensor:msg/Conductivity.idl
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
#include "aanderaa_smart_sensor/msg/detail/conductivity__struct.h"
#include "aanderaa_smart_sensor/msg/detail/conductivity__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aanderaa_smart_sensor__msg__conductivity__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("aanderaa_smart_sensor.msg._conductivity", (char *)PyUnicode_1BYTE_DATA(module_attr), 39) == 0);
    assert(strncmp("Conductivity", (char *)PyUnicode_1BYTE_DATA(name_attr), 12) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  aanderaa_smart_sensor__msg__Conductivity * ros_message = _ros_message;
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
  {  // conductivity
    PyObject * field = PyObject_GetAttrString(_pymsg, "conductivity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->conductivity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // salinity
    PyObject * field = PyObject_GetAttrString(_pymsg, "salinity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->salinity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aanderaa_smart_sensor__msg__conductivity__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Conductivity */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aanderaa_smart_sensor.msg._conductivity");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Conductivity");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aanderaa_smart_sensor__msg__Conductivity * ros_message = (aanderaa_smart_sensor__msg__Conductivity *)raw_ros_message;
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
  {  // conductivity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->conductivity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "conductivity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // salinity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->salinity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "salinity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
