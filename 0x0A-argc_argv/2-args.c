#include <stdio.h>

/**
 * main - prints name of program
 * @argc: arguments number
 * @argv: pointers to arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

			return (0);
}
