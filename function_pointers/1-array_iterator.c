#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array of integers.
 * @size: The number of elements in the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * Description: This function iterates through an array and executes the
 * function pointed to by `action` on each element of the array. If `array`
 * or `action` is NULL, the function does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
