#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len - 1) / 2 + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
