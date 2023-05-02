#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * find_listint_loop - LET'S WRITE A FUNCTION
 * THAT WILL FIND LOOPS IN A LINKED LISTINT_T.
 * @head: IT'S LIST OF POINTETS IN THE HEADER.
 * Return: THE ADDRESS OF THE NODE WHERE LOOP
 * WILL BE STARTS,OR NULL IF THERE IS NO LOOP.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	tortoise = head->next;
	hare = head->next->next;

	while (hare != NULL && hare->next != NULL)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}

		tortoise = tortoise->next;
		hare = hare->next->next;
	}

	return (NULL);
}
