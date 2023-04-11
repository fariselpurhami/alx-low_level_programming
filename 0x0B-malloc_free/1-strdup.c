#include <stdlib.h>

/**
 * _strdup - that returns a pointer to a newly allocated space in memory
 * @str: char of strings
 *
 * Return: On success, the _strdup function returns a pointer to the duplicated
 *string. It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *str_dup;

	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	str_dup = malloc(sizeof(char) * (len + 1));

	if (str_dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		str_dup[i] = str[i];
	}

	return (str_dup);
}
