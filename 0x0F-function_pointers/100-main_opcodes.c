#include <stdio.h>
#include <stdlib.h>

/**
 * main - ENTRY POINTS.
 * @argc: NUMBERS OF ARGUMENTS.
 * @argv: POINTERS OF ARGUMENTS.
 *
 * Return: 0 (ALWAYS) SUCCESS
 */
int main(int argc, char *argv[])
{
	int i;

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

	unsigned char *main_func = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *(main_func + i));
	}

	printf("\n");

	return (0);
}
