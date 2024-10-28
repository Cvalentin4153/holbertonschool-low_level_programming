#include "main.h"

void more_numbers(void)
{
	int num;
	int i;

	for (i = 0; i <= 10; i++)
			for (num = 0; num <= 14; num++)
				{
				_putchar(num + '0');
				_putchar('\n');
				}
	_putchar('\n');
}
