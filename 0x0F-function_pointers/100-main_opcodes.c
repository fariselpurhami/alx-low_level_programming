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
	int num_bytes;

	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02x\n", *((unsigned char *)main + num_bytes - 1));
			break;
		}
		printf("%02x ", *((unsigned char *)main + i));
	}

	return (0);
}
