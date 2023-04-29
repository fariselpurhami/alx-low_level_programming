#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - IT'S FUNCTION THAT DELETE THE HEAD NODE OF LISTINT_T.
 * @head: IT'S LIST OF THE POINTERS IN THE HEADER FUNCTIONS LISTINT_T.
 * Return: THE DATA (N) OF THE HEAD NODE THAT DELETED, 0 IF THE LISTS.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *current;
	int n = 0;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	if (current->next != NULL)
	{
		temp = temp->next;
	}

	n = current->n;

	if (current == *head)
	{
		*head = NULL;
	}

	else
	{
		temp->next = NULL;
	}

	free(current);

	return (n);
}
