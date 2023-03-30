#include "main.h"

/**
 * print_number - that prints an integer.
 * @n: integer params
 *
 * Return: 0
 */

void print_number(int n)
{
	int digit, i;

	char digits[10];

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	for (i = 0; n != 0; i++)
	{
		digit = n % 10;
		digits[i] = digit + '0';

		n /= 10;
	}
	for (i--; i >= 0; i--)
	{
		_putchar(digits[i]);
	}
}
