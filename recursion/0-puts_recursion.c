#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 *
 * Description: Uses recursion to print each character in the
 * string until it reaches the null terminator, at which point
 * it prints a new line.
 */
void _puts_recursion(char *s)

{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
