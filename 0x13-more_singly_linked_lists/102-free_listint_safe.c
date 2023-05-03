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
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - LETS WRITE FUNCTION THAT FREES LISTINT_T.
 * @h: IT'S LIST OF THE POINTERS TO THE HEADER OF THE LISTINT_T.
 * Return: THE SIZE OF LIST THAT WAS FREED AND WILL BE RETURNED.
 */
size_t free_listint_safe(listint_t **h)
{

	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
