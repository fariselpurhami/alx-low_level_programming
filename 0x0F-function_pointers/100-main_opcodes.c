#include <stdio.h>
#include <stdlib.h>

/**
 * main - ENTRY POINTS.
 * @argc: NUMBERS OF ARGUMENTS.
 * @argv: POINTERS OF ARGUMENTS.
 *
 * Return: 0 (ALWAYS) SUCCESS
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *start = (char *)main;

	print_opcodes(start, num_bytes);

	return (0);
}
