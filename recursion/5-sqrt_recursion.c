#include "main.h"
/**
 * _helper - Recursively checks for the natural square root of n
 * @n: The number to find the square root of
 * @i: The current number being tested as the square root
 *
 * Description: Checks if the square of the current number i equals n,
 * indicating it’s the square root. If the square of i exceeds n,
 * returns -1. Otherwise, increments i and continues the check.
 *
 * Return: The natural square root of n, or -1 if no natural
 * square root exists
 */
int _helper(int n, int i)
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
		return (_helper(n, i + 1));
	}
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Description: Uses recursion to determine the natural square root
 * of a given number by calling a helper function. If the number does
 * not have a natural square root, returns -1.
 *
 * Return: The natural square root of n, or -1 if n does not have
 * a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_helper(n, 1));
	}
}
