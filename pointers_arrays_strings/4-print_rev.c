#include "main.h"

void print_rev(char *s)
{
int length= 0;
int i;
	while (*s != '\0')
	{
		s++;
	}
		for (i = length - 1; i >= 0; i--)
		{
		_putchar(s[i]);
		}
_putchar('\n');
}
