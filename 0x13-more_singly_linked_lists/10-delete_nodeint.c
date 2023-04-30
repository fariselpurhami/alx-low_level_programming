#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - LET'S WRITE A FUNCTION THAT
 * DELETED THE NODE AT INDEX INDEX OF A LISTINT_T LINKED.
 * @head: IT'S A LIST OF POINTERS TO THE HEADER OF POINT.
 * @index: IT'S A NODES OF INDEX THAT SHOULD BEE DELETED.
 * Return: ITS SHOULD BE RETURNED ONE IF IT WILL SUCCEED.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

		return (-1);
	}

	current = *head;

	for (i = 0; current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (-1);
}
