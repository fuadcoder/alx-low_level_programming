#include "lists.h"

/**
 * reverse_listint - it reverses a linked list
 * @head: the pointer at the beginning of the node in the linked list
 *
 * Return: the pointer at the beginning of the node in the new linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
