#include "main.h"
#include <stddef.h>

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
