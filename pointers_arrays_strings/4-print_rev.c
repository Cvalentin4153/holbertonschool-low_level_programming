#include "main.h"

void print_rev(char *s)
{
int length;

	while (*s != '\0')
	{
		s++;
	}
		for (length = -1; length >= 0; length--)
		{
		_putchar(s[length]);
		}
_putchar('\n');
}
