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
	unsigned int current_index = 0;

	while (current != NULL && current_index < index)
	{
		current = current->next;
		current_index++;
	}

	if (current_index == index)
	{
		return (current);
	}

	if (current_index != index)
	{
		return (NULL);
	}

	return (NULL);
}
