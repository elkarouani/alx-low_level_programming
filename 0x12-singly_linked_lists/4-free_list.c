#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: first node of the list
 */
void free_list(list_t *head)
{
	list_t *node;

	while ((node = head))
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
