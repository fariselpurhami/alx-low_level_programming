i#include "main.h"
/**
 * main - _islower if c is lowercase
 * @c:
 * Returns 1 if c is lowercase, 0 otherwise
 */

int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
