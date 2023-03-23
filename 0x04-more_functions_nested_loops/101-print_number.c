#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	int i, digit, digits, is_negative;
	unsigned int power;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	else
	{
		is_negative = 0;
	}

	digits = 0;
	for (i = n; i > 0; i /= 10)
	{
		digits++;
	}
	power = 1;
	for (i = 1; i < digits; i++)
	{
		power *= 10;
	}
	if (is_negative)
	{
		_putchar('-');
	}
	for (i = digits; i > 0; i--)
	{
		digit = (n / power) % 10;
		_putchar(digit + '0');
		power /= 10;
	}
}
