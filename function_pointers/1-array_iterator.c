#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array of integers
 * @size: The number of elements in the array
 * @action: Pointer to the function to be executed on each element
 *
 * Description: This function takes an array, its size, and a function pointer.
 * It calls `action` on each element of `array`.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
