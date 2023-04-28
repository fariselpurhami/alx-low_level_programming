#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - IT'S WRITING A FUNCTIONS_T.
 * THAT PRINTS ALL ELEMENTS OF LISTINT_T LIST.
 * @h: IT'S A LIST OF THE POINTERS TO HEADERS.
 * Return: COUNT TO THE NUMBER OF NODES LISTS.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		if (ptr == NULL)
		{
			printf("[0] (nil)\n");
		}
		if (ptr != NULL)
		{
			printf("%d\n", ptr->n);
		}

		count++;
		ptr = ptr->next;
	}

	return (count);
}
