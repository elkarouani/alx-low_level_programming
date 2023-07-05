#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: the first node of the list
 *
 * Return: sum of all values
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
