#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - LET'S WRITE A FUNCTIONS THAT
 * ADDS A NEW NODES AT THE END OF LISTINT_T LISTS.
 * @head: IT'S LIST TO THE POINTER OF THE HEADERS.
 * @n: IT'S A VALUES TO BE ADDED TO THE NEW NODES.
 * Return: THE NEW ELEMENTS OF T ADDRESS OR NULLS.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new_node;

	return (new_node);
}
