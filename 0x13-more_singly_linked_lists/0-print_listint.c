#include "lists.h"

/**
 * print_listint - it prints all d elements of a linked list
 * @h: the linked list of type listint to be printed
 *
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
