#include "lists.h"

/* prototype */

size_t dlistint_len(const dlistint_t *h);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 * dlistint_len - LET'S WRITEA FUNCTION THAT.
 * WILL BE RETURNS THE NUMBER OF LINKED LIST.
 * @h: ITS POINTER OF THE HEADER TO THE LIST.
 * Return: THE NUMBER OF ELEMENT IN THE LIST.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}

	return (e);
}


/**
 * insert_dnodeint_at_index -LET WRITE FUNCTIONS INSERTS NEW NODES.
 * @h: IT'S A POINTERS TO THE HEADERS OF THE DOUBLIED LINKED LISTS.
 * @idx: IT'S A POINTERS OF THE STRINGS AT INDEX TO THE ADDED NODE.
 * @n: IT'S A POINTERS OF THR STRINGS THAT HAS A VALUE OF THE NODE.
 * Return: IT WILL BEEN RETURNED THE POINTERS THAH HAVE BEEN NEWED.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c = dlistint_len(*h);
	dlistint_t *x = NULL, *s = *h;

	if (h)
	{
		if (idx > c)
		{
			return (NULL);
		}

		if (idx == 0)
		{
			return (add_dnodeint(h, n));
		}

		if (idx == c)
		{
			return (add_dnodeint_end(h, n));
		}

		x = malloc(sizeof(dlistint_t));
		x->n = n;

		if (x)
		{
			while (idx--)
			{
				s = s->next;
			}

			x->prev = s->prev;
			x->next = s;
			s->prev->next = x;
			s->prev = x;
		}
	}

	return (x);
}
