#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: pointer to the string (character array)
 *
 * Description: This function takes a pointer to a character array (string)
 * and returns the number of characters in the string, excluding the null
 * terminator.
 *
 * Return: length of the string as an integer
 */
int _strlen(char *s)
{
int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
