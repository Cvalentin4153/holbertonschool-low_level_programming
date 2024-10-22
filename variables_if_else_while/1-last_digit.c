#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Assigns a random number to variable n and prints the last digit,
 *              followed by a message indicating whether it is greater than 5,
 *              equal to 0, or less than 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);

if (last_digit > 5)
{
	printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
	printf("and is 0\n");
}
else
{
	printf("and is less than 6 and not 0\n");
}
return (0);
}
