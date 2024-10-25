#include "main.h"
/**
 *print_last_digit - Prints the last digit of a number
 *@n: The number to get the last digit from
 *
 *Description:This function calculates the last digit of an integer `n`,
 *prints it, and returns its value. If the last digit is
 *negative, it is converted to positive.
 *
 *Return: The value of the last digit
 */
int print_last_digit(int n)
{
int l;

l = n % 10;

if (l < 0)
{
l = -l;
}
_putchar(l + '0');
return (l);
}
