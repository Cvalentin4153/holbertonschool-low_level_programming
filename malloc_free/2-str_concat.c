#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Description: Returns a pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated. If NULL is passed, treats it as an empty string.
 * Returns NULL on failure.
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
int len1 = 0;
int len2 = 0;
int total;
char *str;
int i;
int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
		total = len1 + len2 + 1;
			str = malloc(total);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		str[len1 + j] = s2[j];
	}
		str[total - 1] = '\0';
			return (str);
}
