#include "main.h"
/**
 * puts_half - Prints the second half of a string
 * @str: pointer to the string to be printed
 *
 * Description: This function calculates the length of the string
 * and prints the second half. If the length is odd, it starts printing
 * from index (length - 1) / 2 + 1. Otherwise, it starts from length / 2.
 */
void puts_half(char *str)
{
int length = 0;
int start;

	while (str[length] != '\0')
	{
		length++;
	}
		if (length % 2 == 0)
		{
			start = length / 2;
		}
			else
			{
				start = (length - 1) / 2 + 1;
			}
		while (str[start] != '\0')
		{
		_putchar(str[start]);
		start++;
		}
	_putchar('\n');
}
