#include <stddef.h>

/**
 * int_index - FUNCTIONS THAT SEARCHES FOR AN INTEGERS.
 * @array: IT'S ARRAY OF STRINGS.
 * @size: IT'S A NUMBER OF ELEMENTS IN THE ARRAY.
 * @cmp: IS A POINTER TO THE FUNCTION TO BE USED TO COMPARE VALUES.
 *
 * Return: 0 ALWAYS (SUCCESS).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
