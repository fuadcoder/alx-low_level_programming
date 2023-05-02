#include "lists.h"

/**
 * pop_listint - this deletes the head node of the linked list
 * @head: the pointer to d first element in a linked list
 *
 * Return: data that is inside the elements that was being deleted, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
