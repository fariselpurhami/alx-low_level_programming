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
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
