#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint - LET'S WRITE A FUNCTION THAT FREES LISTINT_T.
 * @head: IT'S A LIST OF POINTERS TO LISTINT_T OF THE HEADERS.
 * Return: NOTHING WILL BE RETURNED TO THE FUNCTIONS OF LISTS.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
