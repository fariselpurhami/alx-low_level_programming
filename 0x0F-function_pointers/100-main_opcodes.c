#include <stdio.h>
#include <stdlib.h>

/**
 * main - PRINTS THE OPCODES OF ITS OWN MAIN FUNCTION.
 * @argc: NUMBERS OF ARGUEMNTS.
 * @argv: ARRAY OF ARGUMENTS.
 *
 * Return: 0 ALWAYS
 */
int main(int argc, char **argv)
{
	int i, num_bytes;

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
		printf("%02x ", ((unsigned char *)main)[i]);
	}
	printf("\n");

	return (0);
}
