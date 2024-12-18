#include "main.h"
/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string to be appended
 * @n: maximum number of bytes to use from src
 *
 * Description: This function appends the src string to the dest string,
 * using at most n bytes from src. src does not need to be null-terminated
 * if it contains n or more bytes.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
		dest[i] = '\0';
	return (dest);
}
