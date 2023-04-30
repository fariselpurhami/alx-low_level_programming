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
	listint_t *current, *next, *prev;

	size_t = 0;

	if (h == NULL)
	{
		return (0);
	}

	current = *h;
	*h = NULL;
	prev = NULL;

	while (current != NULL)
	{
		size++;
		next = current->next;
		current->next = prev;
		prev = current;
		free(current);
		current = next;
	}

	return (size);
}
