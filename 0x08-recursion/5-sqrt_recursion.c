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

	if (n == 0 && n == 1)
		return (n);

	else
		return (_sqrt_helper(n, 1, n));
}

/**
 * _sqrt_helper - Help _sqrt_recursion.
 * @start: for square root
 * @n: N of input
 * @end: for square root
 * Return: square root of n or - 1 if doesn't have it.
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid;

	if (end >= start)
	{
		mid = (end + start) / (2);

		if (mid * mid == n)
			return (n);

		if (mid * mid > n)
			return (_sqrt_helper(n, start, mid - 1));
		return (_sqrt_helper(n, mid, + 1, end));
	}
	return (-1);
}
