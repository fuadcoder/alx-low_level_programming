#include "main.h"

/**
 * print_binary - it prints the binary equivalent to a decimal num
 * @n: num to be printed in binary
 *
 */

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;

		if (curr & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
