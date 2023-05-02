#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_listint_safe - LETS WRITE FUNCTION THAT FREES LISTINT_T.
 * @h: IT'S LIST OF THE POINTERS TO THE HEADER OF THE LISTINT_T.
 * Return: THE SIZE OF LIST THAT WAS FREED AND WILL BE RETURNED.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tortoise, *hare;
	size_t size = 0;
	void *addresses[1024];
	size_t j;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	tortoise = *h;
	hare = (*h)->next;

	while (hare != NULL && hare < hare->next)
	{
		addresses[size] = (void *)tortoise;
		size++;

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	addresses[size] = (void *)tortoise;
	size++;

	if (hare != NULL)
	{
		addresses[size] = (void *)hare;
		size++;
	}

	for (j = 0; j < size; j++)
	{
		tortoise = (listint_t *)addresses[j];
		free(tortoise);
	}

	*h = NULL;

	return (size);
}
