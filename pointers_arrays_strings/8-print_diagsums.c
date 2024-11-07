#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Calculates and prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: pointer to the square matrix of integers
 * @size: the size of the matrix (number of rows or columns)
 */

void print_diagsums(int *a, int size)
{
int sumprim = 0;
int sumsec = 0;
int i;

	for (i = 0; i < size; i++)
	{
		sumprim += a[i * size + i];
		sumsec += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sumprim, sumsec);
}
