#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - LETS WRITE FUNCTION RETURN THE NUMBER OF BIT
 * YOU WOULD NEED TO FIIP TO GET FROM ONE NUMBER TO ANOTHER.
 * @n: IT'S (N) THE  NUMBERS OF THE POINTERS TO THE HEADERS.
 * @m: IT'S (M) THE NUMBERS TO BE COUNTED IN THE POINTERS_T.
 * Return: COUNT
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
