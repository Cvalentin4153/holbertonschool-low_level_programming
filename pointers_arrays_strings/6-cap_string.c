#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: pointer to the string to be modified
 *
 * Description: This function capitalizes each word in the input string.
 * Words are separated by spaces, tabulation, new lines, or punctuation marks.
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;

char separators[] = " \t\n,;.!?\"(){}";

if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
while (str[i] != '\0')
{
int j;
for (j = 0; separators[j] != '\0'; j++)
{
if (str[i] == separators[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
{
str[i + 1] = str[i + 1] - 32;
break;
}
}
i++;
}
return str;
}
