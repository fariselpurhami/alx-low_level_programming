#include <stddef.h>
#include "lists.h"

/**
 * list_len - WE SHOULD RETURN NUMBERS OF ELEMENTS IN LINKED LISTS_T LIST.
 * @h: LIST LIST_T TO A POINTERS.
 *
 * Return: THE NUMBERS OF H IN THE ELEMENTS.
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
