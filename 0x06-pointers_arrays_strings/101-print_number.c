#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer
 *
 * Return: 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	putchar(n % 10 + '0');
}
