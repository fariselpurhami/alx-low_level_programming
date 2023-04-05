#include "main.h"

/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n: N of input
 *
 * Return: square root of n or - 1 if doesn't have it
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

		return (_sqrt_helper(n, n / 2));
}

/**
 * _sqrt_helper - Help _sqrt_recursion.
 * @n: N of input
 * @x: square root
 * Return: square root of n or - 1 if doesn't have it.
 */
int _sqrt_helper(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (_sqrt_helper(n, (x + n / x) / 2));
}
