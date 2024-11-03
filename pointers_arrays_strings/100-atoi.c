#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: pointer to the string to be converted
 *
 * Description: This function converts a string to an integer, taking into
 * account all `+` and `-` signs before the number. If there are no numbers,
 * it returns 0. The function stops processing as soon as the number ends.
 *
 * Return: the integer value of the number in the string, or 0 if none
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int started = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
			sign *= 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
				result = result * 10 + (*s - '0');
		}
		else if (started)
		{
			break;
		}
			s++;
	}
	return result * sign;
}
