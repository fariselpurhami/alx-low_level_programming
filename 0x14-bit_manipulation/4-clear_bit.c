#include <stdio.h>
#include "main.h"

/**
 * clear_bit - LET'S WRITE FUNCTION THAT SETS
 * THE VALUES OF A BITS TO 0 AT A GIVEN INDEX.
 * @n: IT'S A NUMBERS OF THE POINTERS TO HEAD.
 * @index: IT'S A BITS OF INDEX TO BE CLEARED.
 *Return: 1 SUCCESSED OR -1 OCCURRED AN ERROR.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
