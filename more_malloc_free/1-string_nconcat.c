#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings up to n bytes of s2
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes from s2 to concatenate
 *
 * Description: Returns a pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 * If n is greater or equal to the length of s2, use the entire s2.
 * If NULL is passed, treat it as an empty string.
 * Returns NULL if memory allocation fails.
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0;
unsigned int len2 = 0;
char *str;
unsigned int i;

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
			if (n >= len2)
			{
				n = len2;
			}
				str = malloc((len1 + n + 1) * sizeof(char));
				if (str == NULL)
				{
					return (NULL);
				}
					for (i = 0; i < len1; i++)
					{
					str[i] = s1[i];
					}
					for (i = 0; i < n; i++)
					{
						str[len1 + i] = s2[i];
					}
	str[len1 + n] = '\0';
return (str);
}
