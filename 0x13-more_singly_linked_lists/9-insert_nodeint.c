#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - LET'S WRITE FUNCTION
 * THAT INSERTS A NEW NODES AT THE GIVEN POSITION.
 * @head: IT'S LISTS OF THE POINTER TO THE HEADER.
 * @idx: IT'S LISTS OF INDEX WHERE NEW NODE ADDED.
 * @n: IT'S A VALUES OF THE NEW NODES OF DATA (N).
 * Return: THE NEW NODE OF THE ADDRESS OR NULL IF.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
