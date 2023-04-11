#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: char of concat strings
 * @s2: char of concat strings
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;

	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; s2[j]; j++)
	{
		result[j] = s2[j];
	}

	result[i + j] = '\0';

	return (result);
}

