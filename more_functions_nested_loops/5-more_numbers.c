#include "main.h"

void more_numbers(void)
{
	int num;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
			{
				if (num > 9)
					{
						_putchar((num / 10) + '0');
					}
						else 
							{
								_putchar(num);
							}
			}
		_putchar('\n');
	}
}
