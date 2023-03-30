#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *p = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			for (j = 0; j < 13; j++)
			{
				if (str[i] == 'Z')
					str[i] = 'A';
				else if (str[i] == 'z')
					str[i] = 'a';
				else
					str[i]++;
			}
		}
	}
	return (p);
}
