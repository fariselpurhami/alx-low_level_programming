#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - LET'S WRITE A FUNCTION
 * THAT PRINTS A LISTINT_T LINKED LISTS TO OUT.
 * @head: IT'S A LISTS OF THE POINTERS TO HEAD.
 * Return: THE NUMBERS OF NODES IN THE LISTINT.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *temp;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		temp = current;
		current = current->next;

		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (count);
}
