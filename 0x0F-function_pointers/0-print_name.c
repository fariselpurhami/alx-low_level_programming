#include <stdio.h>

/**
 * print_name - FUNCTIONS THAT PRINTS A NAME.
 * @name: NAME OF THE STRINGS.
 * @f: FUNCTIONS OF THE POINTERS.
 *
 * Return: NOTHING TO BE RETURNED.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
