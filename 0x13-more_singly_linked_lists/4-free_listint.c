#include "lists.h";

/**
 * free_listint - frees a listint_t list.
 * @head: first node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while ((head = current_node))
	{
		head = head->next;
		free(current);
	}
}
