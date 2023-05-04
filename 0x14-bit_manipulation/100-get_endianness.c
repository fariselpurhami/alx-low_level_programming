#include "main.h"

/**
 * get_endianness - WRITE  FUNCTION THAT CHECK ENDIAN.
 * Return: 0 IF IT'S A BIG ENDIAN, 1 IF LITTLE ENDIAN.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
