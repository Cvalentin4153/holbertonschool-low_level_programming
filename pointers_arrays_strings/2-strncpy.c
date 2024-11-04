#include "main.h"
/**
 * _strncpy - Copies a string, up to n characters
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source string to be copied
 * @n: maximum number of characters to copy from src
 *
 * Description: This function copies at most n characters from src to dest.
 * If src has fewer than n characters, the rest of dest will be padded with
 * null bytes. If src has n or more characters, dest will not be null-terminated.
 *
 * Return: pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
