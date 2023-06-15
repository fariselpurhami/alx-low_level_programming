#include "lists.h"

/* prototype */
size_t print_dlistint(const dlistint_t *h);

/**
 * print_dlistint - LET'S WRITE A FUCNTION THAT.
 * WILL PRINTS ALL ELEMENTS OF DLISTINT_T LISTS.
 * @h: IT'S A POINTER OF THE HEADER TO THE LIST.
 * Return: THE NUMBERS OF THE NODES IN THE LIST.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
