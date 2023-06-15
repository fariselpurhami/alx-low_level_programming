#include "lists.h"

/* protoype */
size_t dlistint_len(const dlistint_t *h);

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
