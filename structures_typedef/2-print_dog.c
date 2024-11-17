#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Prints the elements of a struct dog
 * @d: Pointer to a struct dog to print
 *
 * Description: This function prints the name, age, and owner of a dog
 * in a specific format. If any field is NULL, it prints (nil) for that
 * field. If the pointer d is NULL, the function does nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
		if (d->name == NULL)
		{
		printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
}
