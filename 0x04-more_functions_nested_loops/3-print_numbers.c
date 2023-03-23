#include "main.h"

/**
 * prints the numbers, from 0 to 9, followed by a new line.
 *
 * return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
