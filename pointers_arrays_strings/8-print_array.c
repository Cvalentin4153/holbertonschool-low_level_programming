#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a: pointer to the array of integers
 * @n: number of elements to be printed
 *
 * Description: This function prints the first n elements of an integer array,
 * separated by a comma and space. It finishes with a newline.
 */
void print_array(int *a, int n)
{
int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]); /* Print the current element */
	if (i < n - 1)
	{
		printf(", ");
	}
	}
		printf("\n");
}
