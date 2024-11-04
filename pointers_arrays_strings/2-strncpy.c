#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
	while (dest[i] < n && src[j] != '\0')
	{
		src[j] = dest[i];
		i++;
		j++;
	}
	if (src[i] < n)
	{
		dest[j] = '\0';
	}
	return (dest);
}
