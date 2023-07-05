#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the first node of the list
 * @idx: the index where to put the new node
 * @n: the number value for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i = 0;

	if (!new_node || !head)
		return (NULL);

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			new_node->n = n;
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}

		temp = temp->next;
		i++;
	}

	return (NULL);
}
