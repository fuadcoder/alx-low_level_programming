#include "main.h"

/**
 * set_bit - this will set a bit at a given type of index to 1
 * @n: this is pointer to d num to change
 * @index: this is the  index of d bit to set to 1
 *
 * Return: 1(Success), -1(Failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
