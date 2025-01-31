// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from plansys2_msgs:msg/Node.idl
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
#include "plansys2_msgs/msg/detail/node__struct.h"
#include "plansys2_msgs/msg/detail/node__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "plansys2_msgs/msg/detail/param__functions.h"
// end nested array functions include
bool plansys2_msgs__msg__param__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * plansys2_msgs__msg__param__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool plansys2_msgs__msg__node__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
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
    assert(strncmp("plansys2_msgs.msg._node.Node", full_classname_dest, 28) == 0);
  }
  plansys2_msgs__msg__Node * ros_message = _ros_message;
  {  // node_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->node_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // expression_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "expression_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->expression_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // modifier_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "modifier_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->modifier_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // node_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->node_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // children
    PyObject * field = PyObject_GetAttrString(_pymsg, "children");
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
      Py_ssize_t size = view.len / sizeof(uint32_t);
      if (!rosidl_runtime_c__uint32__Sequence__init(&(ros_message->children), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint32_t * dest = ros_message->children.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'children'");
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
      if (!rosidl_runtime_c__uint32__Sequence__init(&(ros_message->children), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint32_t * dest = ros_message->children.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint32_t tmp = PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
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
  {  // value
    PyObject * field = PyObject_GetAttrString(_pymsg, "value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // negate
    PyObject * field = PyObject_GetAttrString(_pymsg, "negate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->negate = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * plansys2_msgs__msg__node__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Node */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("plansys2_msgs.msg._node");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Node");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  plansys2_msgs__msg__Node * ros_message = (plansys2_msgs__msg__Node *)raw_ros_message;
  {  // node_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->node_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // expression_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->expression_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "expression_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // modifier_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->modifier_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "modifier_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->node_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // children
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "children");
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
    if (itemsize != sizeof(uint32_t)) {
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
    if (ros_message->children.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint32_t * src = &(ros_message->children.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->children.size * sizeof(uint32_t));
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
  {  // value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // negate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->negate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "negate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
