// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from plansys2_msgs:msg/DurativeAction.idl
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
#include "plansys2_msgs/msg/detail/durative_action__struct.h"
#include "plansys2_msgs/msg/detail/durative_action__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "plansys2_msgs/msg/detail/param__functions.h"
// end nested array functions include
bool plansys2_msgs__msg__param__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * plansys2_msgs__msg__param__convert_to_py(void * raw_ros_message);
bool plansys2_msgs__msg__tree__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * plansys2_msgs__msg__tree__convert_to_py(void * raw_ros_message);
bool plansys2_msgs__msg__tree__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * plansys2_msgs__msg__tree__convert_to_py(void * raw_ros_message);
bool plansys2_msgs__msg__tree__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * plansys2_msgs__msg__tree__convert_to_py(void * raw_ros_message);
bool plansys2_msgs__msg__tree__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * plansys2_msgs__msg__tree__convert_to_py(void * raw_ros_message);
bool plansys2_msgs__msg__tree__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * plansys2_msgs__msg__tree__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool plansys2_msgs__msg__durative_action__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("plansys2_msgs.msg._durative_action.DurativeAction", full_classname_dest, 49) == 0);
  }
  plansys2_msgs__msg__DurativeAction * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // parameters
    PyObject * field = PyObject_GetAttrString(_pymsg, "parameters");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'parameters'");
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
    if (!plansys2_msgs__msg__Param__Sequence__init(&(ros_message->parameters), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create plansys2_msgs__msg__Param__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    plansys2_msgs__msg__Param * dest = ros_message->parameters.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!plansys2_msgs__msg__param__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // at_start_requirements
    PyObject * field = PyObject_GetAttrString(_pymsg, "at_start_requirements");
    if (!field) {
      return false;
    }
    if (!plansys2_msgs__msg__tree__convert_from_py(field, &ros_message->at_start_requirements)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // over_all_requirements
    PyObject * field = PyObject_GetAttrString(_pymsg, "over_all_requirements");
    if (!field) {
      return false;
    }
    if (!plansys2_msgs__msg__tree__convert_from_py(field, &ros_message->over_all_requirements)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // at_end_requirements
    PyObject * field = PyObject_GetAttrString(_pymsg, "at_end_requirements");
    if (!field) {
      return false;
    }
    if (!plansys2_msgs__msg__tree__convert_from_py(field, &ros_message->at_end_requirements)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // at_start_effects
    PyObject * field = PyObject_GetAttrString(_pymsg, "at_start_effects");
    if (!field) {
      return false;
    }
    if (!plansys2_msgs__msg__tree__convert_from_py(field, &ros_message->at_start_effects)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // at_end_effects
    PyObject * field = PyObject_GetAttrString(_pymsg, "at_end_effects");
    if (!field) {
      return false;
    }
    if (!plansys2_msgs__msg__tree__convert_from_py(field, &ros_message->at_end_effects)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * plansys2_msgs__msg__durative_action__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DurativeAction */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("plansys2_msgs.msg._durative_action");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DurativeAction");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  plansys2_msgs__msg__DurativeAction * ros_message = (plansys2_msgs__msg__DurativeAction *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parameters
    PyObject * field = NULL;
    size_t size = ros_message->parameters.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    plansys2_msgs__msg__Param * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->parameters.data[i]);
      PyObject * pyitem = plansys2_msgs__msg__param__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "parameters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // at_start_requirements
    PyObject * field = NULL;
    field = plansys2_msgs__msg__tree__convert_to_py(&ros_message->at_start_requirements);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "at_start_requirements", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // over_all_requirements
    PyObject * field = NULL;
    field = plansys2_msgs__msg__tree__convert_to_py(&ros_message->over_all_requirements);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "over_all_requirements", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // at_end_requirements
    PyObject * field = NULL;
    field = plansys2_msgs__msg__tree__convert_to_py(&ros_message->at_end_requirements);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "at_end_requirements", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // at_start_effects
    PyObject * field = NULL;
    field = plansys2_msgs__msg__tree__convert_to_py(&ros_message->at_start_effects);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "at_start_effects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // at_end_effects
    PyObject * field = NULL;
    field = plansys2_msgs__msg__tree__convert_to_py(&ros_message->at_end_effects);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "at_end_effects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
