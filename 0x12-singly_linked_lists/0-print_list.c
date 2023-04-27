#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - PRINTS ALL THE ELEMENTS OF A LISTS_T LIST.
 * @h: IT'S A POINTERS TO THE LIST_T LIST.
 *
 * Return: NUMBERS OF NODES IN H.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		nodes++;
		h = h->next;
	}

	return (nodes);
}
