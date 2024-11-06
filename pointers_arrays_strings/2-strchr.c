#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string
 * @s: pointer to the string to be searched
 * @c: character to locate in the string
 *
 * Description: This function searches for the first occurrence of the
 * character c in the string s.
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
		if (*s == c)
		{
			return (s);
		}
		return (NULL);
}
