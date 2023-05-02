#include "lists.h"

/**
 * add_nodeint - it add a new node at d beginning of a linked list
 * @head: the pointer to d first node in the list
 * @n: the data to insert in new node
 *
 * Return: the pointer to d new node, or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

