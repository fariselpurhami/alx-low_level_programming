#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - IT'S FREES A LIST_T LISTS.
 * @head: IT'S A POINTERS A LIST TO THE LIST_H.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
