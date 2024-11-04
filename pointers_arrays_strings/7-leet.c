#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: pointer to the string to be encoded
 *
 * Description: This function replaces certain letters in a string with
 * specific numbers according to "leet" encoding:
 * - 'a' and 'A' become '4'
 * - 'e' and 'E' become '3'
 * - 'o' and 'O' become '0'
 * - 't' and 'T' become '7'
 * - 'l' and 'L' become '1'
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char leet_values[] = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
	for (j = 0; letters[j] != '\0'; j++)
	{
		if (str[i] == letters[j])
		{
			str[i] = leet_values[j];
				break;
		}
	}
}
return str;
}
