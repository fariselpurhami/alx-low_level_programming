#include "main.h"

/**
 * prints the numbers, from 0 to 9, followed by a new line.
 *
 * return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		_putchar(i + '48');
	}
	_putchar('\n');
}
