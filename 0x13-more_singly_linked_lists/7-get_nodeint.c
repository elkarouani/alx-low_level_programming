#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node of the list
 * @index: the index tu use
 *
 * Return: the node with index as the requested
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index && head)
	{
		head = head->next;
		count++;
	}

	return (head);
}
