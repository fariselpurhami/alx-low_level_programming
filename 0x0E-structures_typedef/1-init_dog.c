#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 * @d: Struct dog to Pointers
 * @name: Name of The Dog
 * @age: Age of The Dog
 * @owner: Owner of The Dog
 *
 * Return: void
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
