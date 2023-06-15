#include "lists.h"

/**
 * get_dnodeint_at_index - it returns the
 * nth node of a dlistint_t linked list
 * @head: the head of a list
 * @index: the index of the nth node
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
