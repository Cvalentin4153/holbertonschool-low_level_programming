#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: The number to calculate the factorial for
 *
 * Description: Uses recursion to calculate the factorial.
 * If n is lower than 0, returns -1 to indicate an error.
 *
 * Return: The factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
