#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - WRITE A FUCNTIONS THAT PRINTS EVERYTHING.
 * @format: LIST OF TYPES OF ARGUMETNS PASSED TO THE FUNCTIONS.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		j = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case'i':
				printf("%d", va_arg(args, int));
				break;
			case'f':
				printf("%f", va_arg(args, double));
				break;
			case's':
				str = va_arg(args, char *);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				j = 0;
				break;
		}
		if (format[i + 1] && j)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
