#include <stdio.h>

#include "main.h"
/**
 * _puts - print a string, followed by new line
 * @str: function parameter
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
