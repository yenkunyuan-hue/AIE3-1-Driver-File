// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from marine_acoustic_msgs:msg/Dvl.idl
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
#include "marine_acoustic_msgs/msg/detail/dvl__struct.h"
#include "marine_acoustic_msgs/msg/detail/dvl__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "geometry_msgs/msg/detail/vector3__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool marine_acoustic_msgs__msg__dvl__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("marine_acoustic_msgs.msg._dvl", (char *)PyUnicode_1BYTE_DATA(module_attr), 29) == 0);
    assert(strncmp("Dvl", (char *)PyUnicode_1BYTE_DATA(name_attr), 3) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  marine_acoustic_msgs__msg__Dvl * ros_message = _ros_message;
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
  {  // velocity_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->velocity_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dvl_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "dvl_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dvl_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity_covar
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_covar");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 9;
      double * dest = ros_message->velocity_covar;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // course_gnd
    PyObject * field = PyObject_GetAttrString(_pymsg, "course_gnd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->course_gnd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_gnd
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_gnd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_gnd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num_good_beams
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_good_beams");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_good_beams = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sound_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "sound_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sound_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // beam_ranges_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_ranges_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->beam_ranges_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // beam_velocities_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_velocities_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->beam_velocities_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // beam_unit_vec
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_unit_vec");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'beam_unit_vec'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 4;
    geometry_msgs__msg__Vector3 * dest = ros_message->beam_unit_vec;
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
  {  // range
    PyObject * field = PyObject_GetAttrString(_pymsg, "range");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 4;
      double * dest = ros_message->range;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // range_covar
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_covar");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 4;
      float * dest = ros_message->range_covar;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // beam_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_quality");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 4;
      float * dest = ros_message->beam_quality;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // beam_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_velocity");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 4;
      float * dest = ros_message->beam_velocity;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // beam_velocity_covar
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_velocity_covar");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 4;
      float * dest = ros_message->beam_velocity_covar;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * marine_acoustic_msgs__msg__dvl__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Dvl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("marine_acoustic_msgs.msg._dvl");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Dvl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  marine_acoustic_msgs__msg__Dvl * ros_message = (marine_acoustic_msgs__msg__Dvl *)raw_ros_message;
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
  {  // velocity_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->velocity_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dvl_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dvl_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dvl_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_covar
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "velocity_covar");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->velocity_covar[0]);
    memcpy(dst, src, 9 * sizeof(double));
    Py_DECREF(field);
  }
  {  // altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // course_gnd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->course_gnd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "course_gnd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_gnd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_gnd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_gnd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_good_beams
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_good_beams);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_good_beams", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sound_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sound_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sound_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beam_ranges_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->beam_ranges_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beam_ranges_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beam_velocities_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->beam_velocities_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beam_velocities_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beam_unit_vec
    PyObject * field = NULL;
    size_t size = 4;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Vector3 * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->beam_unit_vec[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "beam_unit_vec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "range");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->range[0]);
    memcpy(dst, src, 4 * sizeof(double));
    Py_DECREF(field);
  }
  {  // range_covar
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "range_covar");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->range_covar[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // beam_quality
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "beam_quality");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->beam_quality[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // beam_velocity
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "beam_velocity");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->beam_velocity[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // beam_velocity_covar
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "beam_velocity_covar");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->beam_velocity_covar[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
