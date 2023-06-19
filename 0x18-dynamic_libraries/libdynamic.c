#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - (char c)
 *
 * Prints the character `c` to the standard output.
 */
int _putchar(char c) 
{
	putchar(c);
	return (0);
}

/**
 * _islower - (int c)
 *
 * Returns: 1 if the character `c` is lowercase, and 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - (int c)
 *
 * Returns: 1 if the character `c` is alphabetic, and 0 otherwise.
 */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

/**
 * _abs - (int n)
 *
 * Returns: the absolute value of the integer `n`.
 */
int _abs(int n)
{
	return (n < 0) ? -n : n;
}

/**
 * _isupper - (int c)
 *
 * Returns: 1 if the character `c` is uppercase, and 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - (int c)
 *
 * Returns: 1 if the character `c` is a digit, and 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - (char *s)
 *
 * Returns: the length of the string `s`.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}

/**
 * _puts - (char *s)
 *
 * Prints the string `s` to the standard output.
 */
void _puts(char *s)
{
	puts(s);
}

/**
 * _strcpy - (char *dest, char *src)
 *
 * Copies the string `src` to the string `dest`.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * _atoi - (char *s)
 *
 * Converts the string `s` to an integer.
 */
int _atoi(char *s)
{
	int n = 0;

	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		n = n * 10 + (*s - '0');
		s++;
	}

	return (n * sign);
}

/**
 * _strcat - (char *dest, char *src)
 *
 * Appends the string `src` to the end of the string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}

/**
 * _strncat - (char *dest, char *src, int n)
 *
 * Appends the first `n` characters of the string `src` to the end of the string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}

/**
 * _strncpy - (char *dest, char *src, int n);
 *
 * Copies the first `n` characters of the string `src` to the string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * _strcmp - (char *s1, char *s2)
 *
 * Compares the strings `s1` and `s2` and returns an integer indicating the result of the comparison.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++);
	return (s1[i] - s2[i]);
}

/**
 * _memset - (char *s, char b, unsigned int n)
 *
 * Sets the first `n` bytes of the memory pointed to by `s` to the value `b`.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _memcpy - (char *dest, char *src, unsigned int n);
 *
 * Copies the first `n` bytes of the memory pointed to by `src` to the memory pointed to by `dest`.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
