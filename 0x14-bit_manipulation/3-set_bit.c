#include <stdio.h>
#include "main.h"

/**
 * set_bit - LET'S WRITE FUNCTION THAT SETS
 * VALUES OF A BITS TO 1 AT THE GIVEN INDEX.
 * @n: IT'S NUMBERS OF THE POINTERS IN HEAD.
 * @index: IT'S A SETS OF INDEX TO THE BITS.
 * Return: (1) OR (-1) IF AN ERROR OCCURRED.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= 1UL << index;
	return (1);
}
