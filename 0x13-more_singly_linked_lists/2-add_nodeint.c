#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint - LETS WRITE A FUNCTION THAT ADDS
 * NEW NODE AT THE BEGINNING OF A LISTINT_T LIST.
 * @head: IT'S LIST OF THE POINTER TO THE HEADER.
 * @n: IT'S A NEW NODE THAT ADDED TO THE INTEGER.
 * Return: NEW ADDRESS OF THE ELEMENT OR IF NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
