#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - LET'S WRITE A FUNCTIONS THAT PRINTS THE
 * COUNT NUMBERS OF UNIQUES NODES IN LOOPED LISTINT_T LINKED LIST.
 * @head: IT'S A LIST OF THE POINTER IN THE HEADER IN THE LISTINT.
 * Return: THE LIST IF IT NOT LOOPED - 0 OTHERWISE IN UNIQE NODES.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tortoise, *hare;
	size_t count = 0;

	if (head == NULL)
	{
		return (count);
	}
	tortoise = hare = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
	}

	if (tortoise != hare)
	{
		tortoise = tortoise->next;
		count++;

		while (tortoise != hare)
		{
			count++;
			tortoise = tortoise->next;
		}

		return (count);
	}
	return (count);
}

/**
 * free_listint_safe - LETS WRITE FUNCTION THAT FREES LISTINT_T.
 * @h: IT'S LIST OF THE POINTERS TO THE HEADER OF THE LISTINT_T.
 * Return: THE SIZE OF LIST THAT WAS FREED AND WILL BE RETURNED.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (size);

	size = looped_listint_count(*h);

	if (size > 0)
	{
		current = *h;
	}

	while (size > 1)
	{
		current = current->next;
		size--;
	}

	next = current->next;
	current->next = NULL;
	free(*h);
	*h = next;
	size++;

	while (*h != NULL)
	{
		current = *h;
		*h = (*h)->next;
		free(current);
		size++;
	}

	return (size);
}
