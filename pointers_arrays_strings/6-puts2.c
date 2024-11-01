#include "main.h"

void puts2(char *str)
{
char var;

	for (var = 0; var <= *str; var+=2)
	{
			_putchar(var);
			_putchar('\n');
	}
}
