#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @n: array elemnts
 * @a: array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{

	int *start = a;
	int *end = a + n - 1;
	int temp;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
