#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - A FUNCTION THE PRINTS A STRUCT DOG
 * @d: STRUCT DOG TO THE POINTETS
 *
 * Return: VOID
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
