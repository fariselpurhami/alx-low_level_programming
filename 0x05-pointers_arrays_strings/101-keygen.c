#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random
 * vaild passwords for the program 101-crackme.
 *
 * Return: 0 Always
 */

#define PASSWORD_LENGTH 64

int main(void)
{
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	char password[PASSWORD_LENGTH + 1] = {0};
	const char charset[] =
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const int charset_length = sizeof(charset) - 1;

	srand(time(NULL));

	{

		password[i] = charset[rand() % charset_length];
	}
	printf("%s", password);

	return (0);
}
