#include "lists.h"

/**
 * add_nodeint_end - adds a node at the ending of a linked list
 * @head: pointer to d first elem in the list
 * @n: the data to insert in d  new element
 *
 * Return: pointer to the new code, or NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
