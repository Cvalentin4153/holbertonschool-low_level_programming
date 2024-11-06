#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: pointer to the main string to search within
 * @accept: pointer to the set of characters to match in s
 *
 * Description: This function calculates the number of bytes in the initial
 * segment of s that consist only of bytes from accept.
 *
 * Return: the number of bytes in the initial segment of s
 * that contain only characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i;
int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}
			if (!found)
			{
				break;
			}
	}
	return count;
}
