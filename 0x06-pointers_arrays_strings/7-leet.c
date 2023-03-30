#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet = "aAeEoOtTlL";
	char *replace = "4433007711";
	int j;

	while (*ptr)
	{
		j = 0;
		while (leet[j])
		{
			if (*ptr == leet[j])
			{
				*ptr = replace[j];
				break;
			}
			j++;
		}
		ptr++;
	}
	return (str);
}
