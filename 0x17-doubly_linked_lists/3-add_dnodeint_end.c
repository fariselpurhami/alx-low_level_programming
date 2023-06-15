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
	dlistint_t *x = NULL;
	dlistint_t *c = *head;

	x = malloc(sizeof(dlistint_t));
	if (x)
	{
		x->n = n;
		x->next = NULL;
		x->prev = NULL;
	}

	if (!(*head))
	{
		*head = x;
	}
	else
	{
		while (c->next)
		{
			c = c->next;
		}

		c->next = x;
		x->prev = c;
	}

	return (x);
}
