#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node to a linked list
 * in a certain index
 * @head: pointer to the first node
 * @idx: index where can place the new node
 * @n: the value to insert in the new node
 *
 * Return: the pointer of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *temporary_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; temporary_node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temporary_node->next;
			temporary_node->next = new_node;
			return (new_node);
		}
		else
		{
			temporary_node = temporary_node->next;
		}
	}

	return (NULL);
}
