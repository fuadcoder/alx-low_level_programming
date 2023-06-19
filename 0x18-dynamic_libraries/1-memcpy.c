#include "main.h"
/**
 * _memcpy - its a function that copies memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @n: number of bytes
 *
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
