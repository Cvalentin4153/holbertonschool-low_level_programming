#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: pointer to the first string to compare
 * @s2: pointer to the second string to compare
 *
 * Description: This function compares two strings character by character.
 * It returns the difference between the first characters that differ.
 * If the strings are identical, it returns 0.
 *
 * Return: an integer less than, equal to, or greater than zero if s1
 * is found to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
