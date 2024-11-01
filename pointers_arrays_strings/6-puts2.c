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
int var;

	for (var = 0; str[var] != '\0'; var += 2)
	{
			_putchar(str[var]);
	}
			_putchar('\n');
}
