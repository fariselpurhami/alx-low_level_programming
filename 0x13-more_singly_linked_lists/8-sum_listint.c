#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - LET'S WRITE A FUNCTION THAT RETURNS
 * SUM OF ALL TH DATA (N) OF A LISTINT_T LINKED LIST.
 * @head: IT'S A LISTS OF THE POINTETS IN THE HEADER.
 * Return: THE SUM OF ALL DATA OF A LISTINT_T LINKED.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int count = 0;

	while (head)
	{
		sum += head->n;
		count++;
		head = head->next;
	}

	return (sum);
}
