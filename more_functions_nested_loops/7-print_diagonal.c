#include "main.h"
/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: The number of times the character '\' should be printed, 
 *     with each new line indented further
 *
 * Return: void
 */
void print_diagonal(int n)
{
int l;
int space;

	for (l = 0; l < n; l++)
	{
		for (space = 0; space < l; space ++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
