#include <stdio.h>
#include <stdlib.h>
/**
 * main -Multiple two numbers in program
 * @argc: arguments numbe
 * @argv: pointers to arguments
 *
 * Return: 0, 1 otherwise
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
