#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - digit if it is a character
 * @c: Checking of character
 *
 * Return: 0 and 1 if c is a digit
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - The lenght of strings
 * @s: Measure the strings
 *
 * Return: The S Lenght
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * _multiply - Two strings
 * @num1: first Number of strings
 * @num2: second Number of strings
 *
 * Return: New strigns num1, num2
 */
char *_multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len = len1 + len2;
	int *res = calloc(len, sizeof(int));
	char *prod = calloc(len + 1, sizeof(char));
	int i, j;

	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1 = num[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			int n2 = num2[j] - '0';
			int sum = n1 * n2 + res[i + j + 1] + carry;

			carry = sum / 10;
			res[i + j + 1] = sum % 10;
		}
		res[i + j + 1] += carry;
	}
	for (i = 0; i < len; i++)
	{
		prod[i] = res[i] + '0';
	}
	for (i = 0; prod[i] == '0' && i < len - 1; i++)
		;
	for (j = 0; i < len; i++, j++)
	{
		 prod[j] = prod[i];
	}
	prod[j] = '\0';
	free(res);
	return (prod);
}

/**
 * main - two positive numbers
 * @argc: arguments numbers
 * @argv: arrays of strings
 *
 * Return: 0, 98
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *prod;

	if (argc != 3)
	{
		pritf("Error\n");

		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	for (int i = 0; num1[i]; i++)
	{
		if (!_isdigit(num1[i]))
		{
			printf("Error\n");

			return (98);
		}
	}

	prod = _multiply(num1, num2);
	printf("%s\n", prod);
	free(prod);
	return (0);
}
