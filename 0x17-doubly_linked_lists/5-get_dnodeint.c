#include "lists.h"

/* prototype */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * get_dnodeint_at_index - LET'S WRITE A FUNCTION THAT RETURN THE NTH NODE.
 * @head: IT'S A POINTER OF THE HEADER THAT WILL OF THE DOUBLY LINKED LIST.
 * @index: IT'S POINTER OF THE INTEGER OF THE INDEX OF THE NODE TO THE GET.
 * Return: IT WILL BE RETURNED TO THE ADDRESS OF THE NODE AT THE NTH INDEX.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (c != index && head)
	{
		head = head->next;
		c++;
	}

	if (c == index && head)
	{
		return (head);
	}

	return (NULL);
}
