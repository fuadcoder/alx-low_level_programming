#include "main.h"

/**
 * clear_bit - sets the val of the given bit to 0
 * @n: the pointer to d num to be changed
 * @index: index of d bit to be cleared
 *
 * Return: 1(Success), -1(Failure)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
