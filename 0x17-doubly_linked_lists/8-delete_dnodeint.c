#include "lists.h"

/* prototype */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

/**
 * delete_dnodeint_at_index - WRITES A FUCNTIONS THAT REMOVES THE NODES.
 * @head: IT'S A POINTERS OF THE STRINGS IN THE HEADERS OF LINKED LISTS.
 * @index: IT'S A POINTERS OF THE STRINGS IN THE HEADERS OF THE INDEXES.
 * Return:  WILL BEE RETURN ALWAYS (0) ON THE SUCCESS (-1) ON THE ERROR.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *e;
	dlistint_t *x = *head;

	if (*head && head)
	{
		if (index == 0)
		{
			e = *head;
			*head = (*head)->next;

			if (*head)
			{
				(*head)->prev = NULL;
			}

			free(e);
		}
		else
		{
			while (c != index && x)
			{
				e = x;
				x = e->next;
				c++;
			}

			if (c == index && x)
			{
				e->next = x->next;

				if (x->next)
				{
					x->next->prev = e;
				}

				free(x);
			}
			else
			{
				return (-1);
			}
		}

		return (1);
	}

	return (-1);
}
