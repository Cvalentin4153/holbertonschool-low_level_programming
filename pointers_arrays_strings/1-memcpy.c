#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: the number of bytes to copy
 *
 * Description: This function copies n bytes from the memory area src to the
 * memory area dest.
 *
 * Return: pointer to the destination memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
