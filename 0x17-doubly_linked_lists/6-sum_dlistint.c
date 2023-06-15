#include "lists.h"

/* prototype */

int sum_dlistint(dlistint_t *head);

/**
 * sum_dlistint - WRITE A FUCNTION THAT RETURN SUM OF ALL DATA.
 * @head: POINTERS OF THE HEADERS OF THE DOUBLY IN LINKED LIST.
 * Return: IT WILL BE RETURNED THE SUMMING OF ALL IN THE DATAS.
 */
int sum_dlistint(dlistint_t *head)
{
	int c = 0;

	while (head)
	{
		c += head->n;
		head = head->next;
	}

	return (c);
}

