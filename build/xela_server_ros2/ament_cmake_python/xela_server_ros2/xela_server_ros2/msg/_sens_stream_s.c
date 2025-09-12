// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from xela_server_ros2:msg/SensStream.idl
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
#include "xela_server_ros2/msg/detail/sens_stream__struct.h"
#include "xela_server_ros2/msg/detail/sens_stream__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "xela_server_ros2/msg/detail/sensor_full__functions.h"
// end nested array functions include
bool xela_server_ros2__msg__sensor_full__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * xela_server_ros2__msg__sensor_full__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool xela_server_ros2__msg__sens_stream__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("xela_server_ros2.msg._sens_stream.SensStream", full_classname_dest, 44) == 0);
  }
  xela_server_ros2__msg__SensStream * ros_message = _ros_message;
  {  // sensors
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensors");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'sensors'");
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
    if (!xela_server_ros2__msg__SensorFull__Sequence__init(&(ros_message->sensors), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create xela_server_ros2__msg__SensorFull__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    xela_server_ros2__msg__SensorFull * dest = ros_message->sensors.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!xela_server_ros2__msg__sensor_full__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * xela_server_ros2__msg__sens_stream__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensStream */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("xela_server_ros2.msg._sens_stream");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensStream");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  xela_server_ros2__msg__SensStream * ros_message = (xela_server_ros2__msg__SensStream *)raw_ros_message;
  {  // sensors
    PyObject * field = NULL;
    size_t size = ros_message->sensors.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    xela_server_ros2__msg__SensorFull * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->sensors.data[i]);
      PyObject * pyitem = xela_server_ros2__msg__sensor_full__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "sensors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
