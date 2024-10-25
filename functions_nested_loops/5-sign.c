#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Description: This function checks if a number is positive, zero, or negative.
 *              It prints '+' if the number is positive, '0' if the number is zero,
 *              and '-' if the number is negative. It also returns 1, 0, or -1
 *              accordingly.
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative
 */
int print_sign(int n)

{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
