#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - LET'S ADDS A NEW NODE AT THE END OF A LIST_H LISTS.
 * @head: IT'S A POINTERS OF LIST TO THE LIST_H.
 * @str:  IT'S STRINGS TO BE ADDED TO THE LIST_T LIST.
 *
 * Return: THE FUNCTIONS IF IT'S FAILS - NULL
 *         OTHERWISE - THE ADDRESS OF THE NEW ELEMENTS.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	while (str[len])
	{
		len++;
	}

	new->len = len;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (new);
}
