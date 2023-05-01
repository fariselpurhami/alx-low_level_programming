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
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	for (current = *h; current != NULL; current = temp)
	{
		count++;
		temp = current->next;
		free(current);

		if (temp <= current)
			break;
	}

	*h = NULL;
	return (count);
}
