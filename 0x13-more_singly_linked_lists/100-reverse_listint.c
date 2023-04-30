#include "lists.h"

/**
 * reverse_listint - LETS WRITE FUCNTIONS
 * THAT REVERSES A LISTINT_T LINKED LISTS.
 * @head: IT'S A LIST OF POINTERS TO HEAD.
 * Return: THE FIRST NODE OF THE REVERSED.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;
	int count = 0;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}

	while (current != NULL)
	{
		count++;
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
