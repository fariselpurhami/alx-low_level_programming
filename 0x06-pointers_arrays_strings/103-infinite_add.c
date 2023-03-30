#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to result, or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, i, j;
	char *p1 = n1, *p2 = n2, temp;

	while (*p1++)
		len1++;
	while (*p2++)
		len2++;
	if (len1 > size_r || len2 > size_r)
		return (0);
	p1 = n1 + len1 - 1;
	p2 = n2 + len2 - 1;
	r[size_r] = '\0';
	for (i = size_r - 1; i >= 0; i--)
	{
		if (p1 >= n1 && p2 >= n2)
			temp = (*p1-- - '0') + (*p2-- - '0') + carry;
		if (p1 >= n1)
			temp = (*p1-- - '0') + carry;
		if (p2 >= n2)
			temp = (*p2-- - '0') + carry;
		break;
		carry = temp / 10;
		r[i] = (temp % 10) + '0';
	}
	if (i < 0 && carry)
		return (0);
	if (i < 0)
		return (r + 1);
	{
		for (j = i; j >= 0; j--)
			r[j + 1] = r[j];
		r[0] = carry + '0';
		return (r);
	}
}
