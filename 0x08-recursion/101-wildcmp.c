#include "main.h"

/**
 * wildcmp - function that compares two strings and returns 1 if the strings.
 * are identical or if the second string contain a wild card character
 * (*) that matches any sequences of strings
 * @s1: 1 string
 * @s2: 2 string
 * Return: if s1 , s2 are identical or s2 contain wildcard
 * that matches s1, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s2, s1 + 1));

		if (*s1 == '\0')
			return (wildcmp(s2, s1 + 1));

		return (wildcmp(s2, s1 + 1) || wildcmp(s2, s1 + 1));
	}
	if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
