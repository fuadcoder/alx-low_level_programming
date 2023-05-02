#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a certain index in the linked list
 * @head: the node at the beginning of a linked list
 * @index: index of the node to traverse
 *
 * Return: the pointer to d node we are searching, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
