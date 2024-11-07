#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: pointer to the main string to search in
 * @accept: pointer to the string containing bytes to match
 *
 * Description: This function searches the string `s` for the first occurrence
 * of any of the bytes in the string `accept`. It returns a pointer to the
 * first matching byte in `s`. If no such byte is found, it returns NULL.
 *
 * Return: pointer to the first occurrence in `s` of any bytes from `accept`,
 * or NULL if no byte matches.
 */
char *_strpbrk(char *s, char *accept)
{
int cnt = 0;
int ctt = 0;

	while (s[cnt] != '\0')
	{
		ctt = 0;
		while (accept[ctt] != '\0')
		{
			if (s[cnt] == accept[ctt])
			{
				return (&s[cnt]);
			}
		ctt++;
		}
	cnt++;
	}
	return (NULL);
}
