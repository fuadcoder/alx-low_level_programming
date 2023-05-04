#include "main.h"

/**
 * get_bit - the returns the value of an index in a decimal num
 * @n: the num to find
 * @index: the index of d bit
 *
 * Return: the value of d bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
