#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Description: Uses recursion to determine the natural square root
 * of a given number. If the number does not have a natural square
 * root, returns -1.
 *
 * Return: The natural square root of n, or -1 if n does not have
 * a natural square root
 */
int helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return helper(n, i + 1);
	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return helper(n, 1);
	}
}
