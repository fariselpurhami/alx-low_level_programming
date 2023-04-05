#include "main.h"

/**
 * wildcmp - compare two strings and return 1 if they can be considers,
 * otherwise returns 0 the second string can contained special character '*',
 * which can replace any string
 * @s1: 1 string
 * @s2: 2 string
 *
 * Return: 1 if the string can be considered identical 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (!*s1 && !*(s2 + 1))
			return (1);
		if (!*s1)
		return (wildcmp(s1, s2 + 1));
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 != *s2)
		return (0);
	if (!*s1 && !*s2)
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}
