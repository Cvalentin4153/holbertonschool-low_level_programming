#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 *         or if str is NULL
 */
char *_strdup(char *str)
{
int len = 0;
char *arr;
int new;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
		arr = malloc(len + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (new = 0; new < len + 1; new++)
	{
		arr[new] = str[new];
	}
	return (arr);
}
