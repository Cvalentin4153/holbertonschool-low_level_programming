#include "variadic_functions.h"
/**
 * print_all - Prints anything based on the format.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: This function takes a variable number of arguments
 * and prints them according to the provided format string. Supported
 * format types are:
 * 'c' - char
 * 'i' - integer
 * 'f' - float
 * 's' - string (prints "(nil)" if the string is NULL).
 * Any other format character is ignored. A newline is printed at the end.
 */
void print_all(const char * const format, ...)
{
va_list lst;
unsigned int i = 0;
char *str, *separator = "";

	va_start(lst, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(lst, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(lst, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(lst, double));
			break;
		case 's':
			str = va_arg(lst, char *);
			if (!str)
			{
				str = "(nil)";
			}
			printf("%s%s", separator, str);
			break;
		default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(lst);
}
