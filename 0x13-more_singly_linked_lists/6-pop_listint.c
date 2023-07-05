#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: first node of the list
 *
 * Return: the head node data (n)
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp = *head;

	if (!*head)
		return (0);

	value = temp->n;
	*head = temp->next;
	free(temp);

	return (value);
}
