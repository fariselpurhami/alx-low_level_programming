#include <stdio.h>
#include "lists.h"

/**
 * listint_len - IT'S WRITE FUNCTION THAT RETURN.
 * NUMBER OF ELEMENTS IN ALINKED LISTINT_H LISTS.
 * @h: IT'S A LIST OF THE POINTERS TO THE HEAD_H.
 * Return: COUNT NUMBERS OF ELEMENTS IN THE LIST.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		if (ptr == NULL)
		{
			return (0);
		}
		if (ptr != NULL)
		{
			count++;
			ptr = ptr->next;
		}
	}

	return (count);
}
