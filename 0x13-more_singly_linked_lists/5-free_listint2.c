#include "lists.h"

/**
 * free_listint2 - it frees the  linked list
 * @head:the pointer to listint_t list that has to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
