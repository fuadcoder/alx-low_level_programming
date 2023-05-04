#include "main.h"

/**
 * flip_bits - this counts the num of bits to be changed
 * @n: the first num
 * @m: the second num
 *
 * Return: the num of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int curr;
	unsigned long int exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = exc >> i;
		if (curr & 1)
			j++;
	}

	return (j);
}
