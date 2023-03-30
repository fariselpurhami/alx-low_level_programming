#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @n: input value
 * Return: n value
 */
char *leet(char *)
{
	char *leet = "aAeEoOtTlL";
	char *replace = "4433007711";
	int i, j;

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
