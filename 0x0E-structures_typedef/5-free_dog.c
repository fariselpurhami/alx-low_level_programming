#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - A FUNCTIONS THAT FREES DOGS.
 * @d: STRUCT DOG_T TO THE POINTERS.
 *
 * Return: VOID.
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
