#include <stdio.h>
/**
 * main - Prints the numbers from 1 to 100 with FizzBuzz rules:
 * Prints "Fizz" for multiples of 3, "Buzz" for multiples of 5,
 * and "FizzBuzz" for multiples of both 3 and 5.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

		for (i = 1; i <= 100; i++)
		{
			if (i % 15 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz ");
			}
			else
				printf("%d ", i);
		}
	printf("\n");
}
