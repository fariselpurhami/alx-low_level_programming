#include "lists.h"

/* prototype */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - LETS WRITE FUNCTION THAT ADD A NEW NODE.
 * @head: ITS POINTER OF THE HEADER OF THE DOUBLY LINKED LIST.
 * @n: IT'S A POINTERS STRING OF THE VALUED OF THE ADDED NODE.
 * Return: IT WILL BE RETURNED THE VALUED OF THE NEW POINTERS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *c;
	dlistint_t *x;

	x = malloc(sizeof(dlistint_t));

	if (x == NULL)
	{
		return (NULL);
	}

	x->n = n;
	x->next = NULL;

	c = *head;

	if (c != NULL)
	{
		while (c->next != NULL)
		{
			c = c->next;
		}

		c->next = x;
	}
	else
	{
		*head = x;
	}

	x->prev = c;

	return (x);
}
