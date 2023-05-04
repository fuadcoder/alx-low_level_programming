#include "main.h"

/**
 * get_endianness - will check if the machine is small or big endian
 *
 * Return: 0(big), 1(small)
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

