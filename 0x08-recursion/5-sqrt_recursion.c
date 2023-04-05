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
		return (_sqrt_recursive(n, 1, n));
}

/**
 * _sqrt_recursive - return to _sqrt_recursion.
 * @n: N of input
 * @start: for square root
 * @end: for square root
 * Return: square root of n or - 1
 */
int _sqrt_recursive(int n, int start, int end)
{
	int mid;

	if (end >= start)
	{
		mid = (start + end) / 2;

		if (mid * mid == n)
			return (mid);

		if (mid * mid > n)
			return (_sqrt_recursive(n, start, mid - 1));
		return (_sqrt_recursive(n, mid + 1, end));
	}
	return (-1);
}
