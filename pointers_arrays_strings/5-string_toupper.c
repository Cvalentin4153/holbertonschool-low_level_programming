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
int i = 0;

	while (i != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
