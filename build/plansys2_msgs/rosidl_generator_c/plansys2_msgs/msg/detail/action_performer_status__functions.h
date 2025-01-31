// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from plansys2_msgs:msg/ActionPerformerStatus.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION_PERFORMER_STATUS__FUNCTIONS_H_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION_PERFORMER_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "plansys2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "plansys2_msgs/msg/detail/action_performer_status__struct.h"

/// Initialize msg/ActionPerformerStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plansys2_msgs__msg__ActionPerformerStatus
 * )) before or use
 * plansys2_msgs__msg__ActionPerformerStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__msg__ActionPerformerStatus__init(plansys2_msgs__msg__ActionPerformerStatus * msg);

/// Finalize msg/ActionPerformerStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__msg__ActionPerformerStatus__fini(plansys2_msgs__msg__ActionPerformerStatus * msg);

/// Create msg/ActionPerformerStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plansys2_msgs__msg__ActionPerformerStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__msg__ActionPerformerStatus *
plansys2_msgs__msg__ActionPerformerStatus__create();

/// Destroy msg/ActionPerformerStatus message.
/**
 * It calls
 * plansys2_msgs__msg__ActionPerformerStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__msg__ActionPerformerStatus__destroy(plansys2_msgs__msg__ActionPerformerStatus * msg);

/// Check for msg/ActionPerformerStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__msg__ActionPerformerStatus__are_equal(const plansys2_msgs__msg__ActionPerformerStatus * lhs, const plansys2_msgs__msg__ActionPerformerStatus * rhs);

/// Copy a msg/ActionPerformerStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__msg__ActionPerformerStatus__copy(
  const plansys2_msgs__msg__ActionPerformerStatus * input,
  plansys2_msgs__msg__ActionPerformerStatus * output);

/// Initialize array of msg/ActionPerformerStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * plansys2_msgs__msg__ActionPerformerStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__msg__ActionPerformerStatus__Sequence__init(plansys2_msgs__msg__ActionPerformerStatus__Sequence * array, size_t size);

/// Finalize array of msg/ActionPerformerStatus messages.
/**
 * It calls
 * plansys2_msgs__msg__ActionPerformerStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__msg__ActionPerformerStatus__Sequence__fini(plansys2_msgs__msg__ActionPerformerStatus__Sequence * array);

/// Create array of msg/ActionPerformerStatus messages.
/**
 * It allocates the memory for the array and calls
 * plansys2_msgs__msg__ActionPerformerStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__msg__ActionPerformerStatus__Sequence *
plansys2_msgs__msg__ActionPerformerStatus__Sequence__create(size_t size);

/// Destroy array of msg/ActionPerformerStatus messages.
/**
 * It calls
 * plansys2_msgs__msg__ActionPerformerStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__msg__ActionPerformerStatus__Sequence__destroy(plansys2_msgs__msg__ActionPerformerStatus__Sequence * array);

/// Check for msg/ActionPerformerStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__msg__ActionPerformerStatus__Sequence__are_equal(const plansys2_msgs__msg__ActionPerformerStatus__Sequence * lhs, const plansys2_msgs__msg__ActionPerformerStatus__Sequence * rhs);

/// Copy an array of msg/ActionPerformerStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__msg__ActionPerformerStatus__Sequence__copy(
  const plansys2_msgs__msg__ActionPerformerStatus__Sequence * input,
  plansys2_msgs__msg__ActionPerformerStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION_PERFORMER_STATUS__FUNCTIONS_H_
