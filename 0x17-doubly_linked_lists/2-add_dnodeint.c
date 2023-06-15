#include "lists.h"

/* prototype */

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * add_dnodeint - LET'S WRITE A FUNCTIONS
 * THAT ADD A NEW NODE OF DLISTINT_T LIST.
 * @head: IT'S HEADER DOUBLY LINKED LISTS.
 * @n: IT'S POINTERS OF THE VALUED NODESS.
 * Return: WILL RETURNS THE NEWS POINTERS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *c = NULL;

	c = malloc(sizeof(dlistint_t));
	if (c)
	{
		c->n = n;
		c->prev = NULL;

		if (*head)
		{
			(*head)->prev = c;
		}

		c->next = *head;
		*head = c;
	}

	return (c);
}
