#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - LET'S WRITE A FUNCTION CAN
 * RETURNS THE NTH NODES OF A LISTINT_T LINKED LISTS.
 * @head: IT'S LIST OF THE POINTERS NODE IN THE LIST.
 * @index: RETURNING THE INDEX OF THE NODES AT ZEROO.
 * Return: NTH OF POINTER,NULL IF IT WILL NOT EXISTS.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	listint_t *prev = NULL;
	listint_t *next = NULL;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		i++;
	}

	if (i == index && current != NULL)
	{
		current->next = prev;
		return (current);
	}

	if (prev != NULL)
	{
		while (prev != NULL)
		{
			next = prev->next;
			prev->next = current;
			current = prev;
			prev = next;
		}
		head = current;
	}

	return (NULL);
}
