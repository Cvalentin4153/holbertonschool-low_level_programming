#include "main.h"
/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: pointer to the string to print
 *
 * Description: This function takes a pointer to a character array (string)
 * and prints each character one by one until it reaches the null terminator.
 * After printing the string, it outputs a newline character.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
