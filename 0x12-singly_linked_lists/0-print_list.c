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
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		count++;
		h = h->next;
	}

	return (count);
}
