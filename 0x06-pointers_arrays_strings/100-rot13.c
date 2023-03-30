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
	char *result = s;
	char *ptr = str;

	for (i = 0; s[i] != '\0'; i++)
	{
		for
			("j = 0; (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'); j++")
		{
			if (j == 13)
			{
				break;
			}
			if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'N'))
			{
				s[i] += 13;
			}
			else
			{
				s[i] -= 13;
			}
		}
	}

	return (result);
}
