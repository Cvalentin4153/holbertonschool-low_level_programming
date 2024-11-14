#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Description: Allocates memory for an array of
 * `nmemb` elements of `size` bytes each.
 * The memory is set to zero. If `nmemb` or `size` is 0,
 * returns NULL.
 * If malloc fails, returns NULL.
 *
 * Return: pointer to the allocated memory, or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int total;
unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
total = nmemb * size;
	ptr = malloc(total);
		if (ptr == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < total; i++)
	{
		ptr[i] = 0;
	}
return ((void *)ptr);
}
