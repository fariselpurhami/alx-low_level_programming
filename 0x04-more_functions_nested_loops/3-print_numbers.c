#include "main.h"

/**
 * prints the numbers, from 0 to 9, followed by a new line.
 *
 * return: void
 */

void print_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
