#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails or size is zero
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

	if (size == 0)
	{
		return (NULL);
	}
		array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
return (array);
}
