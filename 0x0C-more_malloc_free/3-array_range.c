#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: Minimum values of arrays
 * @max: Maximum Values of arrays
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}
