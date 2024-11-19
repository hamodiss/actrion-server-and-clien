// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from uav_control_interfaces:action/Flight.idl
// generated code does not contain a copyright notice

#ifndef UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__FUNCTIONS_H_
#define UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "uav_control_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "uav_control_interfaces/action/detail/flight__struct.h"

/// Initialize action/Flight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uav_control_interfaces__action__Flight_Goal
 * )) before or use
 * uav_control_interfaces__action__Flight_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Goal__init(uav_control_interfaces__action__Flight_Goal * msg);

/// Finalize action/Flight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_Goal__fini(uav_control_interfaces__action__Flight_Goal * msg);

/// Create action/Flight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uav_control_interfaces__action__Flight_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_Goal *
uav_control_interfaces__action__Flight_Goal__create();

/// Destroy action/Flight message.
/**
 * It calls
 * uav_control_interfaces__action__Flight_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_Goal__destroy(uav_control_interfaces__action__Flight_Goal * msg);

/// Check for action/Flight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Goal__are_equal(const uav_control_interfaces__action__Flight_Goal * lhs, const uav_control_interfaces__action__Flight_Goal * rhs);

/// Copy a action/Flight message.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Goal__copy(
  const uav_control_interfaces__action__Flight_Goal * input,
  uav_control_interfaces__action__Flight_Goal * output);

/// Initialize array of action/Flight messages.
/**
 * It allocates the memory for the number of elements and calls
 * uav_control_interfaces__action__Flight_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Goal__Sequence__init(uav_control_interfaces__action__Flight_Goal__Sequence * array, size_t size);

/// Finalize array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_Goal__Sequence__fini(uav_control_interfaces__action__Flight_Goal__Sequence * array);

/// Create array of action/Flight messages.
/**
 * It allocates the memory for the array and calls
 * uav_control_interfaces__action__Flight_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_Goal__Sequence *
uav_control_interfaces__action__Flight_Goal__Sequence__create(size_t size);

/// Destroy array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_Goal__Sequence__destroy(uav_control_interfaces__action__Flight_Goal__Sequence * array);

/// Check for action/Flight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Goal__Sequence__are_equal(const uav_control_interfaces__action__Flight_Goal__Sequence * lhs, const uav_control_interfaces__action__Flight_Goal__Sequence * rhs);

/// Copy an array of action/Flight messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Goal__Sequence__copy(
  const uav_control_interfaces__action__Flight_Goal__Sequence * input,
  uav_control_interfaces__action__Flight_Goal__Sequence * output);

/// Initialize action/Flight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uav_control_interfaces__action__Flight_Result
 * )) before or use
 * uav_control_interfaces__action__Flight_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Result__init(uav_control_interfaces__action__Flight_Result * msg);

/// Finalize action/Flight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_Result__fini(uav_control_interfaces__action__Flight_Result * msg);

/// Create action/Flight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uav_control_interfaces__action__Flight_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_Result *
uav_control_interfaces__action__Flight_Result__create();

/// Destroy action/Flight message.
/**
 * It calls
 * uav_control_interfaces__action__Flight_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_Result__destroy(uav_control_interfaces__action__Flight_Result * msg);

/// Check for action/Flight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Result__are_equal(const uav_control_interfaces__action__Flight_Result * lhs, const uav_control_interfaces__action__Flight_Result * rhs);

/// Copy a action/Flight message.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Result__copy(
  const uav_control_interfaces__action__Flight_Result * input,
  uav_control_interfaces__action__Flight_Result * output);

/// Initialize array of action/Flight messages.
/**
 * It allocates the memory for the number of elements and calls
 * uav_control_interfaces__action__Flight_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Result__Sequence__init(uav_control_interfaces__action__Flight_Result__Sequence * array, size_t size);

/// Finalize array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_Result__Sequence__fini(uav_control_interfaces__action__Flight_Result__Sequence * array);

/// Create array of action/Flight messages.
/**
 * It allocates the memory for the array and calls
 * uav_control_interfaces__action__Flight_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_Result__Sequence *
uav_control_interfaces__action__Flight_Result__Sequence__create(size_t size);

/// Destroy array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_Result__Sequence__destroy(uav_control_interfaces__action__Flight_Result__Sequence * array);

/// Check for action/Flight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Result__Sequence__are_equal(const uav_control_interfaces__action__Flight_Result__Sequence * lhs, const uav_control_interfaces__action__Flight_Result__Sequence * rhs);

/// Copy an array of action/Flight messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Result__Sequence__copy(
  const uav_control_interfaces__action__Flight_Result__Sequence * input,
  uav_control_interfaces__action__Flight_Result__Sequence * output);

/// Initialize action/Flight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uav_control_interfaces__action__Flight_Feedback
 * )) before or use
 * uav_control_interfaces__action__Flight_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Feedback__init(uav_control_interfaces__action__Flight_Feedback * msg);

/// Finalize action/Flight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_Feedback__fini(uav_control_interfaces__action__Flight_Feedback * msg);

/// Create action/Flight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uav_control_interfaces__action__Flight_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_Feedback *
uav_control_interfaces__action__Flight_Feedback__create();

/// Destroy action/Flight message.
/**
 * It calls
 * uav_control_interfaces__action__Flight_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_Feedback__destroy(uav_control_interfaces__action__Flight_Feedback * msg);

/// Check for action/Flight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Feedback__are_equal(const uav_control_interfaces__action__Flight_Feedback * lhs, const uav_control_interfaces__action__Flight_Feedback * rhs);

/// Copy a action/Flight message.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Feedback__copy(
  const uav_control_interfaces__action__Flight_Feedback * input,
  uav_control_interfaces__action__Flight_Feedback * output);

/// Initialize array of action/Flight messages.
/**
 * It allocates the memory for the number of elements and calls
 * uav_control_interfaces__action__Flight_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Feedback__Sequence__init(uav_control_interfaces__action__Flight_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_Feedback__Sequence__fini(uav_control_interfaces__action__Flight_Feedback__Sequence * array);

/// Create array of action/Flight messages.
/**
 * It allocates the memory for the array and calls
 * uav_control_interfaces__action__Flight_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_Feedback__Sequence *
uav_control_interfaces__action__Flight_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_Feedback__Sequence__destroy(uav_control_interfaces__action__Flight_Feedback__Sequence * array);

/// Check for action/Flight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Feedback__Sequence__are_equal(const uav_control_interfaces__action__Flight_Feedback__Sequence * lhs, const uav_control_interfaces__action__Flight_Feedback__Sequence * rhs);

/// Copy an array of action/Flight messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_Feedback__Sequence__copy(
  const uav_control_interfaces__action__Flight_Feedback__Sequence * input,
  uav_control_interfaces__action__Flight_Feedback__Sequence * output);

/// Initialize action/Flight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uav_control_interfaces__action__Flight_SendGoal_Request
 * )) before or use
 * uav_control_interfaces__action__Flight_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_SendGoal_Request__init(uav_control_interfaces__action__Flight_SendGoal_Request * msg);

/// Finalize action/Flight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_SendGoal_Request__fini(uav_control_interfaces__action__Flight_SendGoal_Request * msg);

/// Create action/Flight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uav_control_interfaces__action__Flight_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_SendGoal_Request *
uav_control_interfaces__action__Flight_SendGoal_Request__create();

/// Destroy action/Flight message.
/**
 * It calls
 * uav_control_interfaces__action__Flight_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_SendGoal_Request__destroy(uav_control_interfaces__action__Flight_SendGoal_Request * msg);

/// Check for action/Flight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_SendGoal_Request__are_equal(const uav_control_interfaces__action__Flight_SendGoal_Request * lhs, const uav_control_interfaces__action__Flight_SendGoal_Request * rhs);

/// Copy a action/Flight message.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_SendGoal_Request__copy(
  const uav_control_interfaces__action__Flight_SendGoal_Request * input,
  uav_control_interfaces__action__Flight_SendGoal_Request * output);

/// Initialize array of action/Flight messages.
/**
 * It allocates the memory for the number of elements and calls
 * uav_control_interfaces__action__Flight_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_SendGoal_Request__Sequence__init(uav_control_interfaces__action__Flight_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_SendGoal_Request__Sequence__fini(uav_control_interfaces__action__Flight_SendGoal_Request__Sequence * array);

/// Create array of action/Flight messages.
/**
 * It allocates the memory for the array and calls
 * uav_control_interfaces__action__Flight_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_SendGoal_Request__Sequence *
uav_control_interfaces__action__Flight_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_SendGoal_Request__Sequence__destroy(uav_control_interfaces__action__Flight_SendGoal_Request__Sequence * array);

/// Check for action/Flight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_SendGoal_Request__Sequence__are_equal(const uav_control_interfaces__action__Flight_SendGoal_Request__Sequence * lhs, const uav_control_interfaces__action__Flight_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Flight messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_SendGoal_Request__Sequence__copy(
  const uav_control_interfaces__action__Flight_SendGoal_Request__Sequence * input,
  uav_control_interfaces__action__Flight_SendGoal_Request__Sequence * output);

/// Initialize action/Flight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uav_control_interfaces__action__Flight_SendGoal_Response
 * )) before or use
 * uav_control_interfaces__action__Flight_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_SendGoal_Response__init(uav_control_interfaces__action__Flight_SendGoal_Response * msg);

/// Finalize action/Flight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_SendGoal_Response__fini(uav_control_interfaces__action__Flight_SendGoal_Response * msg);

/// Create action/Flight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uav_control_interfaces__action__Flight_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_SendGoal_Response *
uav_control_interfaces__action__Flight_SendGoal_Response__create();

/// Destroy action/Flight message.
/**
 * It calls
 * uav_control_interfaces__action__Flight_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_SendGoal_Response__destroy(uav_control_interfaces__action__Flight_SendGoal_Response * msg);

/// Check for action/Flight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_SendGoal_Response__are_equal(const uav_control_interfaces__action__Flight_SendGoal_Response * lhs, const uav_control_interfaces__action__Flight_SendGoal_Response * rhs);

/// Copy a action/Flight message.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_SendGoal_Response__copy(
  const uav_control_interfaces__action__Flight_SendGoal_Response * input,
  uav_control_interfaces__action__Flight_SendGoal_Response * output);

/// Initialize array of action/Flight messages.
/**
 * It allocates the memory for the number of elements and calls
 * uav_control_interfaces__action__Flight_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_SendGoal_Response__Sequence__init(uav_control_interfaces__action__Flight_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_SendGoal_Response__Sequence__fini(uav_control_interfaces__action__Flight_SendGoal_Response__Sequence * array);

/// Create array of action/Flight messages.
/**
 * It allocates the memory for the array and calls
 * uav_control_interfaces__action__Flight_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_SendGoal_Response__Sequence *
uav_control_interfaces__action__Flight_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_SendGoal_Response__Sequence__destroy(uav_control_interfaces__action__Flight_SendGoal_Response__Sequence * array);

/// Check for action/Flight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_SendGoal_Response__Sequence__are_equal(const uav_control_interfaces__action__Flight_SendGoal_Response__Sequence * lhs, const uav_control_interfaces__action__Flight_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Flight messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_SendGoal_Response__Sequence__copy(
  const uav_control_interfaces__action__Flight_SendGoal_Response__Sequence * input,
  uav_control_interfaces__action__Flight_SendGoal_Response__Sequence * output);

/// Initialize action/Flight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uav_control_interfaces__action__Flight_GetResult_Request
 * )) before or use
 * uav_control_interfaces__action__Flight_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_GetResult_Request__init(uav_control_interfaces__action__Flight_GetResult_Request * msg);

/// Finalize action/Flight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_GetResult_Request__fini(uav_control_interfaces__action__Flight_GetResult_Request * msg);

/// Create action/Flight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uav_control_interfaces__action__Flight_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_GetResult_Request *
uav_control_interfaces__action__Flight_GetResult_Request__create();

/// Destroy action/Flight message.
/**
 * It calls
 * uav_control_interfaces__action__Flight_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_GetResult_Request__destroy(uav_control_interfaces__action__Flight_GetResult_Request * msg);

/// Check for action/Flight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_GetResult_Request__are_equal(const uav_control_interfaces__action__Flight_GetResult_Request * lhs, const uav_control_interfaces__action__Flight_GetResult_Request * rhs);

/// Copy a action/Flight message.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_GetResult_Request__copy(
  const uav_control_interfaces__action__Flight_GetResult_Request * input,
  uav_control_interfaces__action__Flight_GetResult_Request * output);

/// Initialize array of action/Flight messages.
/**
 * It allocates the memory for the number of elements and calls
 * uav_control_interfaces__action__Flight_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_GetResult_Request__Sequence__init(uav_control_interfaces__action__Flight_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_GetResult_Request__Sequence__fini(uav_control_interfaces__action__Flight_GetResult_Request__Sequence * array);

/// Create array of action/Flight messages.
/**
 * It allocates the memory for the array and calls
 * uav_control_interfaces__action__Flight_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_GetResult_Request__Sequence *
uav_control_interfaces__action__Flight_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_GetResult_Request__Sequence__destroy(uav_control_interfaces__action__Flight_GetResult_Request__Sequence * array);

/// Check for action/Flight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_GetResult_Request__Sequence__are_equal(const uav_control_interfaces__action__Flight_GetResult_Request__Sequence * lhs, const uav_control_interfaces__action__Flight_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Flight messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_GetResult_Request__Sequence__copy(
  const uav_control_interfaces__action__Flight_GetResult_Request__Sequence * input,
  uav_control_interfaces__action__Flight_GetResult_Request__Sequence * output);

/// Initialize action/Flight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uav_control_interfaces__action__Flight_GetResult_Response
 * )) before or use
 * uav_control_interfaces__action__Flight_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_GetResult_Response__init(uav_control_interfaces__action__Flight_GetResult_Response * msg);

/// Finalize action/Flight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_GetResult_Response__fini(uav_control_interfaces__action__Flight_GetResult_Response * msg);

/// Create action/Flight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uav_control_interfaces__action__Flight_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_GetResult_Response *
uav_control_interfaces__action__Flight_GetResult_Response__create();

/// Destroy action/Flight message.
/**
 * It calls
 * uav_control_interfaces__action__Flight_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_GetResult_Response__destroy(uav_control_interfaces__action__Flight_GetResult_Response * msg);

/// Check for action/Flight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_GetResult_Response__are_equal(const uav_control_interfaces__action__Flight_GetResult_Response * lhs, const uav_control_interfaces__action__Flight_GetResult_Response * rhs);

/// Copy a action/Flight message.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_GetResult_Response__copy(
  const uav_control_interfaces__action__Flight_GetResult_Response * input,
  uav_control_interfaces__action__Flight_GetResult_Response * output);

/// Initialize array of action/Flight messages.
/**
 * It allocates the memory for the number of elements and calls
 * uav_control_interfaces__action__Flight_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_GetResult_Response__Sequence__init(uav_control_interfaces__action__Flight_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_GetResult_Response__Sequence__fini(uav_control_interfaces__action__Flight_GetResult_Response__Sequence * array);

/// Create array of action/Flight messages.
/**
 * It allocates the memory for the array and calls
 * uav_control_interfaces__action__Flight_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_GetResult_Response__Sequence *
uav_control_interfaces__action__Flight_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_GetResult_Response__Sequence__destroy(uav_control_interfaces__action__Flight_GetResult_Response__Sequence * array);

/// Check for action/Flight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_GetResult_Response__Sequence__are_equal(const uav_control_interfaces__action__Flight_GetResult_Response__Sequence * lhs, const uav_control_interfaces__action__Flight_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Flight messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_GetResult_Response__Sequence__copy(
  const uav_control_interfaces__action__Flight_GetResult_Response__Sequence * input,
  uav_control_interfaces__action__Flight_GetResult_Response__Sequence * output);

/// Initialize action/Flight message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uav_control_interfaces__action__Flight_FeedbackMessage
 * )) before or use
 * uav_control_interfaces__action__Flight_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_FeedbackMessage__init(uav_control_interfaces__action__Flight_FeedbackMessage * msg);

/// Finalize action/Flight message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_FeedbackMessage__fini(uav_control_interfaces__action__Flight_FeedbackMessage * msg);

/// Create action/Flight message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uav_control_interfaces__action__Flight_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_FeedbackMessage *
uav_control_interfaces__action__Flight_FeedbackMessage__create();

/// Destroy action/Flight message.
/**
 * It calls
 * uav_control_interfaces__action__Flight_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_FeedbackMessage__destroy(uav_control_interfaces__action__Flight_FeedbackMessage * msg);

/// Check for action/Flight message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_FeedbackMessage__are_equal(const uav_control_interfaces__action__Flight_FeedbackMessage * lhs, const uav_control_interfaces__action__Flight_FeedbackMessage * rhs);

/// Copy a action/Flight message.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_FeedbackMessage__copy(
  const uav_control_interfaces__action__Flight_FeedbackMessage * input,
  uav_control_interfaces__action__Flight_FeedbackMessage * output);

/// Initialize array of action/Flight messages.
/**
 * It allocates the memory for the number of elements and calls
 * uav_control_interfaces__action__Flight_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_FeedbackMessage__Sequence__init(uav_control_interfaces__action__Flight_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_FeedbackMessage__Sequence__fini(uav_control_interfaces__action__Flight_FeedbackMessage__Sequence * array);

/// Create array of action/Flight messages.
/**
 * It allocates the memory for the array and calls
 * uav_control_interfaces__action__Flight_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
uav_control_interfaces__action__Flight_FeedbackMessage__Sequence *
uav_control_interfaces__action__Flight_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Flight messages.
/**
 * It calls
 * uav_control_interfaces__action__Flight_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
void
uav_control_interfaces__action__Flight_FeedbackMessage__Sequence__destroy(uav_control_interfaces__action__Flight_FeedbackMessage__Sequence * array);

/// Check for action/Flight message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_FeedbackMessage__Sequence__are_equal(const uav_control_interfaces__action__Flight_FeedbackMessage__Sequence * lhs, const uav_control_interfaces__action__Flight_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Flight messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uav_control_interfaces
bool
uav_control_interfaces__action__Flight_FeedbackMessage__Sequence__copy(
  const uav_control_interfaces__action__Flight_FeedbackMessage__Sequence * input,
  uav_control_interfaces__action__Flight_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__FUNCTIONS_H_
