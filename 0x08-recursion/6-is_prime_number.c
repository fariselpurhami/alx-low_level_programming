#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: N input
 *
 * Return: 1 if n is prime
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - return to  is_prime_number
 * @n: N input
 * @divisor: check n is divisible
 * Return: 1 if n is prime
 */
int is_prime_recursive(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n % divisor == 0)
		return (0);

	return (is_prime_recursive(n, divisor + 1));
}
