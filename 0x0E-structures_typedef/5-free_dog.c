#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - a function that frees dogs.
 * @d: Struct to dog_t pointer
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
