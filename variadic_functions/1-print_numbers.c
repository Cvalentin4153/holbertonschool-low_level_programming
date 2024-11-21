#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers followed by a separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Description: This function takes a variable number of integers and
 * prints them separated by the `separator` string. If the separator is
 * `NULL`, numbers are printed without any separator. A new line is printed
 * at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d\n", num);
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
	}
	printf("\n");
	va_end(ap);
}
