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
	listint_t *tortoise = head, *here = head;

	if (head == NULL && head->next == NULL)
	{
		return (NULL);
	}

	while (here)
	{
		tortoise = tortoise->next;
		here = here->next->next;
	}

	if (tortoise == here)
	{
		tortoise = head;
	}
	while (tortoise != here)
	{
		tortoise = tortoise->next;
		here = here->next;
		return (tortoise);
	}

	return (NULL);
}
