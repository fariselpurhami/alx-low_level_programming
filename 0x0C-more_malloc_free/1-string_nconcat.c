#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string of pinters
 * @s2: strings of pointers
 * @n: Numberr of bytes
 *
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1 , followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;

	unsigned int s1_len, s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	new_str = malloc(sizeof(char) * (s1_len + n + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	memcpy(new_str, s1, s1_len);
	memcpy(new_str + s1_len, s2, n);
	new_str[s1_len + n] = '\0';

	return (new_str);
}
