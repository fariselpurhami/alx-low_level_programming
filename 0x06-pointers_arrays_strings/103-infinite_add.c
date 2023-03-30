#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if it can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, carry = 0, sum = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	if (i >= size_r || j >= size_r)
		return (0);

	r[size_r - 1] = '\0';
	i--, j--, size_r--;

	while (i >= 0 || j >= 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum / 10;
		sum %= 10;

		r[size_r - 1] = sum + '0';

		i--, j--, size_r--;
	}

	if (carry > 0 && size_r > 0)
	{
		r[size_r - 1] = carry + '0';
		return (r);
	}
	else if (carry > 0)
	{
		return (0);
	}

	return (&r[size_r]);
}
