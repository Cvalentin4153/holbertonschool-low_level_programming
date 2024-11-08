#include "main.h"
/**
 * _helper - Recursively checks for factors of n
 * @n: The number to check
 * @i: The current divisor being tested
 *
 * Return: 1 if n is prime, 0 if n has a divisor other than 1 and itself
 */
int _helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (_helper(n, i + 1));
	}
}
/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Description: Uses recursion to determine if the input number is a prime
 * number. If the number is less than or equal to 1, it is not prime and 
 * the function returns 0. Otherwise, it calls a helper function to check 
 * for factors.
 *
 * Return: 1 if n is a prime number, 0 if it is not
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (_helper(n, 2));
}
