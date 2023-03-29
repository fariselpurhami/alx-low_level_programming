#include "main.h"
/**
 * string_toupper - function that changes lowercase letters string to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}

    return (str);
}
