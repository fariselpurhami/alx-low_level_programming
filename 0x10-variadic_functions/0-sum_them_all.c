#include <stdarg.h>

/**
 * sum_them_all - THAT RETURNS THE SUM OF ALL ITS PARAMETES.
 * @n: THE PARAMETES NUMBERS TO THE FUNCTIONS.
 * @...: THE SUM OF VARAIABLE NUMBER TO THE FUNCTIONS.
 *
 * Return: 0 ALWAYS (SUCCESS)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
