#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at certain index in a linked list
 * @head: first node of the list
 * @index: the index of the node to be returned
 *
 * Return: pointer of the requested node on the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temporary_node = head;

	while (temporary_node && i < index)
	{
		temporary_node = head->next;
		i++;
	}

	return (temporary_node ? temporary_node : NULL);
}
