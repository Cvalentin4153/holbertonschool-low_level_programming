#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int l;

		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
