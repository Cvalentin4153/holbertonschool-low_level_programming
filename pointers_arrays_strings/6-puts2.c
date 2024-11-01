#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: pointer to the string to be printed
 *
 * Description: This function prints every other character in a string,
 * beginning with the first character, followed by a newline.
 */
void puts2(char *str)
{
int var = 0;

	while (str[var] != '\0')
	{
		_putchar(str[var]);
		var += 2;
	}
		_putchar('\n');
}
