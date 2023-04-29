#include "lists.h"

/**
 * pop_listint - deletes the head node of the linked list
 * @head: pointer to the first element of the linked list
 *
 * Return: the data inside the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary_node;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temporary_node = (*head)->next;
	free(*head);
	*head = temporary_node;

	return (number);
}
