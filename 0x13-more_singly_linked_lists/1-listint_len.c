#include "lists.h"

/**
 * listint_len - it returns the num of element in a linked list
 * @h: linked list of the type listint_t to be returned
 *
 * Return: num of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}

