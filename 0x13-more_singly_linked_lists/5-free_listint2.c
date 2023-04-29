#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary_node;

	if (head == NULL)
		return;

	while (*head)
	{
		temporary_node = (*head)->next;
		free(*head);
		*head = temporary_node;
	}

	*head = NULL;
}
