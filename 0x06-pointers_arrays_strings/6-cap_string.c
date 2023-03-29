#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: The string to be capitalized
 *
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}')
		{
			i++;

			while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
					s[i] == ',' || s[i] == ';' || s[i] == '.' ||
					s[i] == '!' || s[i] == '?' || s[i] == '"' ||
					s[i] == '(' || s[i] == ')' || s[i] == '{' ||
					s[i] == '}')
			{
				i++;
			}

			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}

		i++;
	}

	return (s);
}
