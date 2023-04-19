#include <stddef.h>

/**
 * array_iterator - FUNCTIONS THAT EXECUTES GIVEN AS A PARAMETER ON EACH ARRAY.
 * @array: IT'S ARRAY OF STRINGS.
 * @size: IS THE SIZE OF THE ARRAY.
 * @action: IS A POINTERS TO THE FUNCTION YOU NEED TO USE.
 *
 * Return: NOTHING TO BE RETURNED.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
