// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from plansys2_msgs:action/ExecutePlan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__FUNCTIONS_H_
#define PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "plansys2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "plansys2_msgs/action/detail/execute_plan__struct.h"

/// Initialize action/ExecutePlan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plansys2_msgs__action__ExecutePlan_Goal
 * )) before or use
 * plansys2_msgs__action__ExecutePlan_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_Goal__init(plansys2_msgs__action__ExecutePlan_Goal * msg);

/// Finalize action/ExecutePlan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_Goal__fini(plansys2_msgs__action__ExecutePlan_Goal * msg);

/// Create action/ExecutePlan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plansys2_msgs__action__ExecutePlan_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_Goal *
plansys2_msgs__action__ExecutePlan_Goal__create();

/// Destroy action/ExecutePlan message.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_Goal__destroy(plansys2_msgs__action__ExecutePlan_Goal * msg);

/// Check for action/ExecutePlan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_Goal__are_equal(const plansys2_msgs__action__ExecutePlan_Goal * lhs, const plansys2_msgs__action__ExecutePlan_Goal * rhs);

/// Copy a action/ExecutePlan message.
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
plansys2_msgs__action__ExecutePlan_Goal__copy(
  const plansys2_msgs__action__ExecutePlan_Goal * input,
  plansys2_msgs__action__ExecutePlan_Goal * output);

/// Initialize array of action/ExecutePlan messages.
/**
 * It allocates the memory for the number of elements and calls
 * plansys2_msgs__action__ExecutePlan_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_Goal__Sequence__init(plansys2_msgs__action__ExecutePlan_Goal__Sequence * array, size_t size);

/// Finalize array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_Goal__Sequence__fini(plansys2_msgs__action__ExecutePlan_Goal__Sequence * array);

/// Create array of action/ExecutePlan messages.
/**
 * It allocates the memory for the array and calls
 * plansys2_msgs__action__ExecutePlan_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_Goal__Sequence *
plansys2_msgs__action__ExecutePlan_Goal__Sequence__create(size_t size);

/// Destroy array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_Goal__Sequence__destroy(plansys2_msgs__action__ExecutePlan_Goal__Sequence * array);

/// Check for action/ExecutePlan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_Goal__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_Goal__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_Goal__Sequence * rhs);

/// Copy an array of action/ExecutePlan messages.
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
plansys2_msgs__action__ExecutePlan_Goal__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_Goal__Sequence * input,
  plansys2_msgs__action__ExecutePlan_Goal__Sequence * output);

/// Initialize action/ExecutePlan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plansys2_msgs__action__ExecutePlan_Result
 * )) before or use
 * plansys2_msgs__action__ExecutePlan_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_Result__init(plansys2_msgs__action__ExecutePlan_Result * msg);

/// Finalize action/ExecutePlan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_Result__fini(plansys2_msgs__action__ExecutePlan_Result * msg);

/// Create action/ExecutePlan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plansys2_msgs__action__ExecutePlan_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_Result *
plansys2_msgs__action__ExecutePlan_Result__create();

/// Destroy action/ExecutePlan message.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_Result__destroy(plansys2_msgs__action__ExecutePlan_Result * msg);

/// Check for action/ExecutePlan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_Result__are_equal(const plansys2_msgs__action__ExecutePlan_Result * lhs, const plansys2_msgs__action__ExecutePlan_Result * rhs);

/// Copy a action/ExecutePlan message.
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
plansys2_msgs__action__ExecutePlan_Result__copy(
  const plansys2_msgs__action__ExecutePlan_Result * input,
  plansys2_msgs__action__ExecutePlan_Result * output);

/// Initialize array of action/ExecutePlan messages.
/**
 * It allocates the memory for the number of elements and calls
 * plansys2_msgs__action__ExecutePlan_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_Result__Sequence__init(plansys2_msgs__action__ExecutePlan_Result__Sequence * array, size_t size);

/// Finalize array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_Result__Sequence__fini(plansys2_msgs__action__ExecutePlan_Result__Sequence * array);

/// Create array of action/ExecutePlan messages.
/**
 * It allocates the memory for the array and calls
 * plansys2_msgs__action__ExecutePlan_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_Result__Sequence *
plansys2_msgs__action__ExecutePlan_Result__Sequence__create(size_t size);

/// Destroy array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_Result__Sequence__destroy(plansys2_msgs__action__ExecutePlan_Result__Sequence * array);

/// Check for action/ExecutePlan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_Result__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_Result__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_Result__Sequence * rhs);

/// Copy an array of action/ExecutePlan messages.
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
plansys2_msgs__action__ExecutePlan_Result__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_Result__Sequence * input,
  plansys2_msgs__action__ExecutePlan_Result__Sequence * output);

/// Initialize action/ExecutePlan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plansys2_msgs__action__ExecutePlan_Feedback
 * )) before or use
 * plansys2_msgs__action__ExecutePlan_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_Feedback__init(plansys2_msgs__action__ExecutePlan_Feedback * msg);

/// Finalize action/ExecutePlan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_Feedback__fini(plansys2_msgs__action__ExecutePlan_Feedback * msg);

/// Create action/ExecutePlan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plansys2_msgs__action__ExecutePlan_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_Feedback *
plansys2_msgs__action__ExecutePlan_Feedback__create();

/// Destroy action/ExecutePlan message.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_Feedback__destroy(plansys2_msgs__action__ExecutePlan_Feedback * msg);

/// Check for action/ExecutePlan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_Feedback__are_equal(const plansys2_msgs__action__ExecutePlan_Feedback * lhs, const plansys2_msgs__action__ExecutePlan_Feedback * rhs);

/// Copy a action/ExecutePlan message.
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
plansys2_msgs__action__ExecutePlan_Feedback__copy(
  const plansys2_msgs__action__ExecutePlan_Feedback * input,
  plansys2_msgs__action__ExecutePlan_Feedback * output);

/// Initialize array of action/ExecutePlan messages.
/**
 * It allocates the memory for the number of elements and calls
 * plansys2_msgs__action__ExecutePlan_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_Feedback__Sequence__init(plansys2_msgs__action__ExecutePlan_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_Feedback__Sequence__fini(plansys2_msgs__action__ExecutePlan_Feedback__Sequence * array);

/// Create array of action/ExecutePlan messages.
/**
 * It allocates the memory for the array and calls
 * plansys2_msgs__action__ExecutePlan_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_Feedback__Sequence *
plansys2_msgs__action__ExecutePlan_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_Feedback__Sequence__destroy(plansys2_msgs__action__ExecutePlan_Feedback__Sequence * array);

/// Check for action/ExecutePlan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_Feedback__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_Feedback__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_Feedback__Sequence * rhs);

/// Copy an array of action/ExecutePlan messages.
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
plansys2_msgs__action__ExecutePlan_Feedback__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_Feedback__Sequence * input,
  plansys2_msgs__action__ExecutePlan_Feedback__Sequence * output);

/// Initialize action/ExecutePlan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plansys2_msgs__action__ExecutePlan_SendGoal_Request
 * )) before or use
 * plansys2_msgs__action__ExecutePlan_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_SendGoal_Request__init(plansys2_msgs__action__ExecutePlan_SendGoal_Request * msg);

/// Finalize action/ExecutePlan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_SendGoal_Request__fini(plansys2_msgs__action__ExecutePlan_SendGoal_Request * msg);

/// Create action/ExecutePlan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plansys2_msgs__action__ExecutePlan_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_SendGoal_Request *
plansys2_msgs__action__ExecutePlan_SendGoal_Request__create();

/// Destroy action/ExecutePlan message.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_SendGoal_Request__destroy(plansys2_msgs__action__ExecutePlan_SendGoal_Request * msg);

/// Check for action/ExecutePlan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_SendGoal_Request__are_equal(const plansys2_msgs__action__ExecutePlan_SendGoal_Request * lhs, const plansys2_msgs__action__ExecutePlan_SendGoal_Request * rhs);

/// Copy a action/ExecutePlan message.
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
plansys2_msgs__action__ExecutePlan_SendGoal_Request__copy(
  const plansys2_msgs__action__ExecutePlan_SendGoal_Request * input,
  plansys2_msgs__action__ExecutePlan_SendGoal_Request * output);

/// Initialize array of action/ExecutePlan messages.
/**
 * It allocates the memory for the number of elements and calls
 * plansys2_msgs__action__ExecutePlan_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__init(plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__fini(plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * array);

/// Create array of action/ExecutePlan messages.
/**
 * It allocates the memory for the array and calls
 * plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence *
plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__destroy(plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * array);

/// Check for action/ExecutePlan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ExecutePlan messages.
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
plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * input,
  plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * output);

/// Initialize action/ExecutePlan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plansys2_msgs__action__ExecutePlan_SendGoal_Response
 * )) before or use
 * plansys2_msgs__action__ExecutePlan_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_SendGoal_Response__init(plansys2_msgs__action__ExecutePlan_SendGoal_Response * msg);

/// Finalize action/ExecutePlan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_SendGoal_Response__fini(plansys2_msgs__action__ExecutePlan_SendGoal_Response * msg);

/// Create action/ExecutePlan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plansys2_msgs__action__ExecutePlan_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_SendGoal_Response *
plansys2_msgs__action__ExecutePlan_SendGoal_Response__create();

/// Destroy action/ExecutePlan message.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_SendGoal_Response__destroy(plansys2_msgs__action__ExecutePlan_SendGoal_Response * msg);

/// Check for action/ExecutePlan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_SendGoal_Response__are_equal(const plansys2_msgs__action__ExecutePlan_SendGoal_Response * lhs, const plansys2_msgs__action__ExecutePlan_SendGoal_Response * rhs);

/// Copy a action/ExecutePlan message.
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
plansys2_msgs__action__ExecutePlan_SendGoal_Response__copy(
  const plansys2_msgs__action__ExecutePlan_SendGoal_Response * input,
  plansys2_msgs__action__ExecutePlan_SendGoal_Response * output);

/// Initialize array of action/ExecutePlan messages.
/**
 * It allocates the memory for the number of elements and calls
 * plansys2_msgs__action__ExecutePlan_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__init(plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__fini(plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * array);

/// Create array of action/ExecutePlan messages.
/**
 * It allocates the memory for the array and calls
 * plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence *
plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__destroy(plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * array);

/// Check for action/ExecutePlan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ExecutePlan messages.
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
plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * input,
  plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * output);

/// Initialize action/ExecutePlan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plansys2_msgs__action__ExecutePlan_GetResult_Request
 * )) before or use
 * plansys2_msgs__action__ExecutePlan_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_GetResult_Request__init(plansys2_msgs__action__ExecutePlan_GetResult_Request * msg);

/// Finalize action/ExecutePlan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_GetResult_Request__fini(plansys2_msgs__action__ExecutePlan_GetResult_Request * msg);

/// Create action/ExecutePlan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plansys2_msgs__action__ExecutePlan_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_GetResult_Request *
plansys2_msgs__action__ExecutePlan_GetResult_Request__create();

/// Destroy action/ExecutePlan message.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_GetResult_Request__destroy(plansys2_msgs__action__ExecutePlan_GetResult_Request * msg);

/// Check for action/ExecutePlan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_GetResult_Request__are_equal(const plansys2_msgs__action__ExecutePlan_GetResult_Request * lhs, const plansys2_msgs__action__ExecutePlan_GetResult_Request * rhs);

/// Copy a action/ExecutePlan message.
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
plansys2_msgs__action__ExecutePlan_GetResult_Request__copy(
  const plansys2_msgs__action__ExecutePlan_GetResult_Request * input,
  plansys2_msgs__action__ExecutePlan_GetResult_Request * output);

/// Initialize array of action/ExecutePlan messages.
/**
 * It allocates the memory for the number of elements and calls
 * plansys2_msgs__action__ExecutePlan_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__init(plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__fini(plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * array);

/// Create array of action/ExecutePlan messages.
/**
 * It allocates the memory for the array and calls
 * plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence *
plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__destroy(plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * array);

/// Check for action/ExecutePlan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ExecutePlan messages.
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
plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * input,
  plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * output);

/// Initialize action/ExecutePlan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plansys2_msgs__action__ExecutePlan_GetResult_Response
 * )) before or use
 * plansys2_msgs__action__ExecutePlan_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_GetResult_Response__init(plansys2_msgs__action__ExecutePlan_GetResult_Response * msg);

/// Finalize action/ExecutePlan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_GetResult_Response__fini(plansys2_msgs__action__ExecutePlan_GetResult_Response * msg);

/// Create action/ExecutePlan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plansys2_msgs__action__ExecutePlan_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_GetResult_Response *
plansys2_msgs__action__ExecutePlan_GetResult_Response__create();

/// Destroy action/ExecutePlan message.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_GetResult_Response__destroy(plansys2_msgs__action__ExecutePlan_GetResult_Response * msg);

/// Check for action/ExecutePlan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_GetResult_Response__are_equal(const plansys2_msgs__action__ExecutePlan_GetResult_Response * lhs, const plansys2_msgs__action__ExecutePlan_GetResult_Response * rhs);

/// Copy a action/ExecutePlan message.
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
plansys2_msgs__action__ExecutePlan_GetResult_Response__copy(
  const plansys2_msgs__action__ExecutePlan_GetResult_Response * input,
  plansys2_msgs__action__ExecutePlan_GetResult_Response * output);

/// Initialize array of action/ExecutePlan messages.
/**
 * It allocates the memory for the number of elements and calls
 * plansys2_msgs__action__ExecutePlan_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__init(plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__fini(plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * array);

/// Create array of action/ExecutePlan messages.
/**
 * It allocates the memory for the array and calls
 * plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence *
plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__destroy(plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * array);

/// Check for action/ExecutePlan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ExecutePlan messages.
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
plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * input,
  plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * output);

/// Initialize action/ExecutePlan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * plansys2_msgs__action__ExecutePlan_FeedbackMessage
 * )) before or use
 * plansys2_msgs__action__ExecutePlan_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_FeedbackMessage__init(plansys2_msgs__action__ExecutePlan_FeedbackMessage * msg);

/// Finalize action/ExecutePlan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_FeedbackMessage__fini(plansys2_msgs__action__ExecutePlan_FeedbackMessage * msg);

/// Create action/ExecutePlan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * plansys2_msgs__action__ExecutePlan_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_FeedbackMessage *
plansys2_msgs__action__ExecutePlan_FeedbackMessage__create();

/// Destroy action/ExecutePlan message.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_FeedbackMessage__destroy(plansys2_msgs__action__ExecutePlan_FeedbackMessage * msg);

/// Check for action/ExecutePlan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_FeedbackMessage__are_equal(const plansys2_msgs__action__ExecutePlan_FeedbackMessage * lhs, const plansys2_msgs__action__ExecutePlan_FeedbackMessage * rhs);

/// Copy a action/ExecutePlan message.
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
plansys2_msgs__action__ExecutePlan_FeedbackMessage__copy(
  const plansys2_msgs__action__ExecutePlan_FeedbackMessage * input,
  plansys2_msgs__action__ExecutePlan_FeedbackMessage * output);

/// Initialize array of action/ExecutePlan messages.
/**
 * It allocates the memory for the number of elements and calls
 * plansys2_msgs__action__ExecutePlan_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__init(plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__fini(plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * array);

/// Create array of action/ExecutePlan messages.
/**
 * It allocates the memory for the array and calls
 * plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence *
plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ExecutePlan messages.
/**
 * It calls
 * plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
void
plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__destroy(plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * array);

/// Check for action/ExecutePlan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_plansys2_msgs
bool
plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ExecutePlan messages.
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
plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * input,
  plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__FUNCTIONS_H_
