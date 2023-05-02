#include "lists.h"

/**
 * sum_listint - it calculates the addition of all data in a listint_t list
 * @head: the node at the beginning of the linked list
 *
 * Return: resulting addition
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}
