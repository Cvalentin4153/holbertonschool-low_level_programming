#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring within a string
 * @haystack: the main string to search in
 * @needle: the substring to search for
 *
 * Description:This function searches for the first occurrence of the substring
 * `needle` within the string `haystack`. If the substring is found, it returns
 * a pointer to the beginning of the located substring in `haystack`. If the
 * substring is not found, it returns NULL.
 *
 * Return: pointer to the beginning of the located substring, or NULL if
 * the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int cnt = 0;
int ctt = 0;
	while (haystack[cnt] != '\0')
	{
		while (haystack[cnt + ctt] == needle[ctt])
		{
			ctt++;
		}
			if (needle[ctt] == '\0')
			{
				return (&haystack[cnt]);
			}
		ctt = 0;
		cnt++;
	}
	return (NULL);
}
