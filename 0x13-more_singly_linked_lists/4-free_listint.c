#include "lists.h"

/**
 * free_listint - it frees the linked list
 * @head: listint_t list that has to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
