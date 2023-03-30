#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	int j;

	char *result = str;

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0;
				((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
					&& str[i] <= 'Z'))
				&& j < 13;
				j++)
		{
			if (j == 13)
			{
				break;
			}
			if ((str[i] >= 'a' && str[i] < 'n') || (str[i] >= 'A' && str[i] < 'N'))
			{
				str[i] += 13;
			}
			else
			{
				str[i] -= 13;
			}
		}
	}

	return (result);
}
