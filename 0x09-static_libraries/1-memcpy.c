#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @n: N of bytes
 * @src: copied memory
 * @dest: stored memory
 *
 * Return: with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
