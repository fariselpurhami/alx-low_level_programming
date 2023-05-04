#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - LETS WRITE A FUNCTION THAT
 * CONVERTS A BINARY NUMBER TO AN UNSIGNED INT.
 * @b: IT'S (B) BINARYS NUMBERS TO THE STRINGS.
 * Return: THE (NUM) - TO THE CONVERTED NUMBER.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0, len = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		num <<= 1;

		if (b[i] == '1')
		{
			num += 1;
		}

		return (num);
	}
}
