#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed in reverse
 *
 * Description: Recursively moves to the end of the string, then
 * prints each character on the way back up, resulting in a reverse
 * order print of the string.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		return;
	}
}
