#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: pointer to the array of integers to be reversed
 * @n: number of elements in the array
 *
 * Description: This function takes an array of integers and reverses its
 * elements in place, so the first element becomes the last, the second becomes
 * the second last, and so on.
 */
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
int temp;

	while (start < end)
	{
	temp = a[start];
	a[start] = a[end];
	a[end] = temp;
	start++;
	end--;
	}
}
