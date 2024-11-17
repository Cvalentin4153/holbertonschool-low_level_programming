#include <stdlib.h>
#include <string.h>
#include "dog.h"

/* Calculate the length of a string without strlen */
int string_length(char *str)
{
int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
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
int name_len;
int owner_len;
int i;

new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL) {
		return (NULL);
	}
	if (name != NULL) {
		name_len = string_length(name);
		new_name = malloc(name_len + 1);
			if (new_name == NULL) {
				free(new_dog);
				return (NULL);
			}
		for (i = 0; i <= name_len; i++) {
		new_name[i] = name[i];
		}
	}
	else {
		new_name = NULL;
	}
	if (owner != NULL) {
		owner_len = string_length(owner);
		new_owner = malloc(owner_len + 1);
			if (new_owner == NULL) {
				free(new_name);
				free(new_dog);
			return (NULL);
			}
		for (i = 0; i <= owner_len; i++) {
			new_owner[i] = owner[i];
		}
	}
	else {
		new_owner = NULL;
	}
new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;
return (new_dog);
}
