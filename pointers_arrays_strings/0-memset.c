#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory with
 * @n: the number of bytes to fill
 *
 * Description: This function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int ind;

	for (ind = 0; ind < n; ind++)
	{
	s[ind] = b;
	}
	return (s);
}
