#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @n: number of bytes must be changed
 * @b: the value is desired
 * @s: the memory is filled in starting address
 *
 * Return: value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
