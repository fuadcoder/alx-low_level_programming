#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area with a specific value
 * @s: the starting address of the memory to be filled
 * @b: the value
 * @n: number of the bytes to be altered
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
