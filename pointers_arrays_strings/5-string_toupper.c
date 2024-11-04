#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: pointer to the string to be modified
 *
 * Description: This function takes a string and converts all lowercase
 * letters to uppercase. It iterates through each character, and if the
 * character is a lowercase letter, it converts it by subtracting 32 from
 * its ASCII value.
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
