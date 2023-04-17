#include "dog.h"
#include <stddef.h>

/**
 * init_dog - WRITE A FUNCTION THAT INITIALIZE A VARIABLE OF TYPE STRUCT DOG.
 * @d: STRUCT A DOG TO POINTER.
 * @name: NAME OF THE DOG.
 * @age: AGE OF THE DOG.
 * @owner: OWNER OF THE DOG.
 *
 * Return: VOID.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
