#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lists.h"

void print_address(const void *p);
void print_number(int n);

/**
 * print_listint_safe - LET'S WRITE A FUNCTION
 * THAT PRINTS A LISTINT_T LINKED LISTS TO OUT.
 * @head: IT'S A LISTS OF THE POINTERS TO HEAD.
 * Return: THE NUMBERS OF NODES IN THE LISTINT.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *temp;
	size_t count = 0;

	if (head == NULL)
	{
		exit(98);
	}

	current = head;
	temp = head;

	while (current != NULL)
	{
		write(1, "[", 1);
		print_address(current);
		write(1, "]", 2);
		print_number(current->n);
		write(1, "\n", 1);
		count++;
	}

	current = current->next;

	if (current == temp)
	{
		write(1, "-> [", 4);
		print_address(current);
		write(1, "] ", 2);
		print_number(current->n);
		write(1, "\n", 1);
		exit(98);
	}

	if (count % 10 == 0)
	{
		temp = temp->next;
	}

	return (count);
}

/**
 * print_address - LET'S WRITE A FUNCTION THAT PRINTS
 * THE ADDRESS OF THE POINTERS IN HEXADECIMAL FORMATS.
 * @p: IT'S (P) THAT PRINT THE POINTER OF THE ADDRESS.
 */
void print_address(const void *p)
{
	char buffer[20] = "0x";
	unsigned long int n = (unsigned long int)p;
	int i = 2;

	while (n > 0)
	{
		buffer[i] = "0123456789abcdef"[n % 16];
		n /= 16;
		i++;
	}

	if (i == 2)
	{
		buffer[i++] = '0';
	}

	buffer[i] = '\0';
	write(1, buffer, i);
}

/**
 * print_number - LETS PRINT THE INTEGER.
 * @n: IT'S INTEGERS READY TO BE PRINTED.
 */
void print_number(int n)
{
	char buffer[12];
	int i = 0;
	int is_negative = 0;

	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}

	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}

	while (n > 0)
	{
		buffer[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}

	if (is_negative)
	{
		buffer[i] = '-';
		i++;
	}

	while (i > 0)
	{
		i--;
		write(1, &buffer[i], 1);
	}
}
