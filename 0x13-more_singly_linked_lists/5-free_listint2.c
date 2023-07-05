#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: the first node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head)
	{
		current = *head;

		while ((temp = current))
		{
			current = current->next;
			free(temp);
		}
		
		*head = NULL;
	}
}
