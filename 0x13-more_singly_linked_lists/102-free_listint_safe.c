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

	current = *h;

	while (current != NULL)
	{
		count++;

		if (current < current->next)
		{
			temp = current->next;
			free(current);
			current = temp;
		}
		else
		{
			free(current);
			*h = NULL;
			break;
		}
	}

	return (count);
}
