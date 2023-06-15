#include "lists.h"

/* protoype */

void free_dlistint(dlistint_t *head);

/**
 * free_dlistint - LET'S WRITE A FUNCTION THAT FREES A LIST.
 * @head: IT'S A POINTER OF THE HEAD OF THE DOU LINKED LIST.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *c = NULL;

	while (head)
	{
		c = head;
		head = head->next;
		free(c);
	}
}
