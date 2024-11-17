#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to a struct dog to be initialized
 * @name: Pointer to a string containing the name of the dog
 * @age: Float value representing the age of the dog
 * @owner: Pointer to a string containing the owner's name
 *
 * Description: This function assigns the values of name, age,
 * and owner to the respective fields of the struct dog. If the
 * pointer to the struct (d) is NULL, the function does nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
	return;
}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
