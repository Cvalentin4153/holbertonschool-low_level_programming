#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Description: This function takes pointers to two integers as parameters
 * and swaps the values of the integers they point to.
 */
void swap_int(int *a, int *b)
{

	int n = *a;
		*a = *b;
			*b = n;

}
