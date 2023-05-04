#include <stdio.h>
#include "main.h"

/**
 * print_binary - LET'S WRITE A FUNCTIONS THAT
 * PRINTS THE BINARY REPRESENATION OF A NUMBER.
 * @n: IT'S FUNCTION THAT PRINTS BINARY NUMBER.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, tmp = n;
	int len = 0;

	while (tmp > 0)
	{
		len++;
		tmp >>= 1;
	}

	if (len == 0)
	{
		_putchar('0');
		return;
	}

	mask <<= len - 1;

	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}

		mask >>= 1;
	}
}
