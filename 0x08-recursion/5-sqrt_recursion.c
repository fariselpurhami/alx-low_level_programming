#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n: N of input
 *
 * Return: square root of n or - 1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
		return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - return to _sqrt_recursion.
 * @n: N of square root
 * @i: current square root
 *
 * Return: square root of n or - 1
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}
