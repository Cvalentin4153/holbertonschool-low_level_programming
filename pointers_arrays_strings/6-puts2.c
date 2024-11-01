#include "main.h"

void puts2(char *str)
{
int var;

	for (var = 0; str[var] != '\0'; var+=2)
	{
			_putchar(str[var]);
	}
			_putchar('\n');
}
