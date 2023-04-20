#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - PRINTS THE NUMBERS FOLLOWED BY NEW LINE.
 * @separator: PRINTS THE FUNCTIONS TO BE STRINGS.
 * @n: PRINTS THE FUNCTIONS STRINGS TO BE PRINTED.
 * @...: PRINTS THE VARIABLE NUMBERS TO BE PRINTED.
 *
 * Return: 0 ALWYAS (SUCCESS)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
	}

	if (separator != NULL && i != n - 1)
	{
		printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
