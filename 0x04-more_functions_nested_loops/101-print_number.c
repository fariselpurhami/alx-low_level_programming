#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	int i, j, digit, digits, power, is_negative;

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
	for (i = 0; i < digits; i++)
	{
		power = 1;
		for (j = 0; j < digits - i - 1; j++)
		{
			power *= 10;
		}
		digit = (n / power) % 10;
		_putchar(digit + '0');
	}
	if (is_negative)
	{
		_putchar('-');
	}
}
