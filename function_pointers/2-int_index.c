#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Description: This function iterates through an array and applies the
 * comparison function `cmp` to each element. It returns the index of the
 * first element for which `cmp` does not return 0. If no elements match,
 * or if `size` is less than or equal to 0, or if `array` or `cmp` is NULL,
 * the function returns -1.
 *
 * Return: The index of the first matching element, or -1 if no match is found
 *         or if inputs are invalid.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
		return (i);
		}
	}
	return (-1);
}
