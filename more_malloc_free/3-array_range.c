#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum integer value
 * @max: the maximum integer value
 *
 * Description: Creates an array of integers containing all the values from
 * min (included) to max (included), ordered from min to max.
 * If min > max, the function returns NULL.
 * If malloc fails, the function returns NULL.
 *
 * Return: pointer to the newly created array, or NULL if it fails
 */
int *array_range(int min, int max)
{
int *ptr;
int size;
int i;

	if (min > max)
	{
		return (NULL);
	}
		size = max - min + 1;
			ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
		for (i = 0; i < size; i++)
		{
			ptr[i] = min + i;
		}
return (ptr);
}
