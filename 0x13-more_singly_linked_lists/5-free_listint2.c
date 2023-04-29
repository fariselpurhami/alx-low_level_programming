#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - IT'S FUNCTION FREES LISTINT_T LISTS.
 * @head: IT'S A LIST OF POINTERS OF THE HEADERS.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
	{
		return;
	}

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
