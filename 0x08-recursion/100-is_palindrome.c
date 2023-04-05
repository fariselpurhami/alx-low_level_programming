#include "main.h"
#include <string.h>

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * @s: input string
 * Return: one of palindrome
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);

	return (is_pal_helper(s, 0, len - 1));
}

/**
 * is_pal_helper - it help is_palindrome
 * @s: input string
 * @start: starting substring
 * @end: ending susbtring
 * Return: one of substring is a palindrome, 0 otherwise
 */
int is_pal_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
	return (0);

	return (is_pal_helper(s, start + 1, end - 1));
}
