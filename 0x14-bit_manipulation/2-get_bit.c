#include <stdio.h>
#include "main.h"

/**
 * get_bit - LET'S WRITES A FUNCTIONS THAT
 * RETURN THE VALUE OF (BIT) AT GIVEN INDE.
 * @n: IT'S A BITS FROM THE NUMBERS TO GET.
 * @index: IT'S BITS FROM THE INDEX TO GET.
 * Return: THE VALUES OF THE BITS AT INDEX
 * VALUES 0R -1 IF AN ERRORS OCCURRED.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
