#include "main.h"
/**
 * rev_string - Reverses a string in place
 * @s: pointer to the string to be reversed
 *
 * Description: This function reverses the characters in a string by
 * swapping characters from the start and end, moving toward the center.
 */
void rev_string(char *s)
{
int length = 0;
int start = 0;
int end;
char temp;


	while (s[length] != '\0')
	{
	length++;
	}
		end = length -  1;
			while (start < end)
			{
				temp = s[start];
				s[start] = s[end];
				s[end] = temp;
					start++;
					end--;
			}
}
