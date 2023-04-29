#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a specific node from a linked list
 * @head: pointer to the first node
 * @index: the index of the node to delete
 *
 * Return: 1 (Success), or 0 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary_node = *head;
	listint_t *current_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary_node);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temporary_node || !(temporary_node->next))
			return (-1);
		temporary_node = temporary_node->next;
		i++;
	}

	current_node = temporary_node->next;
	temporary_node->next = current_node->next;
	free(current_node);

	return (1);
}
