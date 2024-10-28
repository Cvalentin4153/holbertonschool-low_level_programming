#include "main.h"

void print_line(int n)
{
char l='_';

	if (n <= 0)
	{
		_putchar('\n');
	}
		while (n > 0)
		{
			_putchar(l);
		}
	_putchar('\n');
}
