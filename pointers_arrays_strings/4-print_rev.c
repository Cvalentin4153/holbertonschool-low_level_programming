#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed in reverse
 *
 * Description: This function calculates the length of the string and then
 * prints each character in reverse order, ending with a newline.
 */

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
