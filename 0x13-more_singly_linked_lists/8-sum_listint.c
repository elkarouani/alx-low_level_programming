#include "lists.h"

/**
 * sum_listint - return the sum of linked list integers
 * @head: first element on the list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temporary_node = head;

	while (temporary_node)
	{
		sum += temporary_node->n;
		temporary_node = temporary_node->next;
	}

	return (sum);
}
