#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: This function prints all natural numbers from the number
 * `n` up to or down to 98. Each number is followed by a comma
 * and space, except the last number (98). The output ends with
 * a new line after 98.
 *
 * Return: void
 */
void print_to_98(int n)
{

if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
n++;
}

else
{

while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
n--;
}
printf("\n");
}
