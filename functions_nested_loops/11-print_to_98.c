#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: This function prints all natural numbers from the number
 * `n` up to or down to 98. Numbers are separated by a comma
 * and space, and the sequence ends with 98 followed by a new line.
 *
 * Return: void
 */

void print_to_98(int n)

{
while (n != 98)
{
printf("%d, ", n);
if (n < 98)
{
n++;
}
else
{
n--;
}
}
printf("98\n");
}
