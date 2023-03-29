#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
<<<<<<< HEAD
<<<<<<< HEAD
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
=======
	long int sign = 1;
	long int num = 0;
	int i = 0;
>>>>>>> b02d1e2329fcad225343afbf49bccca8f4287d2f

	while (s[len] != '\0')
		len++;
=======
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

>>>>>>> 82717ec35bac30bd116eab9300d7b18d4c3af947
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);
<<<<<<< HEAD
=======

>>>>>>> 82717ec35bac30bd116eab9300d7b18d4c3af947
	return (n);
}
