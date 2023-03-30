#include <stdio.h>

/**
 * main - one line to this code
 * You are not allowed to use the variable a
 * You are not allowed to modify the variable p
 * You can only write one statement
 * You are not allowed to use ,
 * You are not allowed to code anything than the line of expected line of code
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4};
	int *p = a + 2;

	*(p) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
