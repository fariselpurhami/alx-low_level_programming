#include <stdio.h>

/**
 * main - prints arguments number
 * @argc: arguments number
 * @argv: arguments pointers array
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
