#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog_t struct
 * @d: Pointer to the dog_t struct to free
 *
 * Description: This function releases memory for the name and owner
 * strings inside the dog_t struct, and then frees the struct itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
