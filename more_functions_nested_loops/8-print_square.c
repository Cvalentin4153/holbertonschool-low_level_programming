#include "main.h"
/**
 * print_square - Prints a square of size `size` using the character '#'
 * @size: The dimension of the square (both width and height)
 *
 * Return: void
 */
void print_square(int size)
{
int s;
int a;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (s = 0; s < size; s++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
