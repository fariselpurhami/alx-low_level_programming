#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	int i, j, k, m;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	i = n;
	j = 1;
	while (i > 9)
	{
		j *= 10;
		i /= 10;
	}
	k = n;
	while (j >= 1)
	{
		m = k / j;
		_putchar(m + '0');
		k -= m * j;
		j /= 10;
	}
}
