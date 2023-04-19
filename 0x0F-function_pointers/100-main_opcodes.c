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
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes - 1; i++)
	{
		printf("%02x ", main_ptr[i]);

		printf("%02x\n", main_ptr[i]);

		return (0);
	}
}
