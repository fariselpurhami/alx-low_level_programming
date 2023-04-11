#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array.
 * @width: width of pointers to strings
 * @height: height of pointers to strings
 *
 * Return: NULL If width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;

	int i = 0, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	return (grid);
}
