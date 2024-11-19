#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Executes a function to print a name.
 * @name: The name to be printed, passed as a string.
 * @f: A pointer to a function that takes a string and returns nothing.
 *
 * Description: This function takes a string `name` and a function pointer `f`,
 * then calls `f` with `name` as its argument to process or print the name.
 * If `name` or `f` is NULL, the function does nothing and returns early.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
