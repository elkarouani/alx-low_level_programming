#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temporary_node;

	while (head)
	{
		temporary_node = head->next;
		free(head);
		head = temporary_node;
	}
}
