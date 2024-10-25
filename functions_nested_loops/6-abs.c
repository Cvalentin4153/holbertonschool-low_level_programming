#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Description:This function takes an integer as input and returns its
 * absolute value. If the integer is negative, it returns the
 * positive counterpart. If the integer is positive or zero,
 * it returns the number itself.
 *
 * Return: The absolute value of the integer
 */
int _abs(int n)

{

if (n >= 0)
{
return (n);
}
else
{
return (-n);
}
}
