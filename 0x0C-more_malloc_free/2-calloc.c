#include <stdlib.h>
#include "main.h"

/**
 * _calloc - it allocates the memory for an array
 * @nmemb: function param
 * @size: function param
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		p[nmemb] = 0;
	return ((void *)p);
}
