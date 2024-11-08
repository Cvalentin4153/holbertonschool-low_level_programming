#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string whose length is to be calculated
 *
 * Description: Recursively calculates the length of the string
 * by moving through each character until reaching the null
 * terminator, then returning the total count.
 *
 * Return: The length of the string as an integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
}
