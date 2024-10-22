#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Assigns a random number to variable n each time it is executed,
 * and prints whether the number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);


if (n > 0)
{

printf ("is positive\n");

}

if (n = 0)
{

printf("is zero\n");

}

if (n < 0)
{

printf("is negative\n");

}

}
