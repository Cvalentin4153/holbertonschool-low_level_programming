#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog object
 * @name: Pointer to a string containing the dog's name
 * @age: Float value representing the dog's age
 * @owner: Pointer to a string containing the owner's name
 *
 * Description: This function dynamically allocates memory for a new dog
 * and its name and owner strings. It stores copies of the name and owner
 * strings in the new dog struct. If any memory allocation fails, it
 * cleans up and returns NULL.
 *
 * Return: Pointer to the newly created dog_t struct, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name;
char *new_owner;

new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		new_name = malloc(strlen(name) + 1);
			if (new_name == NULL)
			{
				free(new_dog);
				return (NULL);
			}
			strcpy(new_name, name);
	}
	else
	{
		new_name = NULL;
	}
	if (owner != NULL)
	{
		new_owner = malloc(strlen(owner) + 1);
		if (new_owner == NULL)
		{
		free(new_name);
		free(new_dog);
		return (NULL);
		}
		strcpy(new_owner, owner);
	}
	else
	{
		new_owner = NULL;
	}
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
