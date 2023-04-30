#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer of the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temporary_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temporary_node->next)
		temporary_node = temporary_node->next;

	temporary_node->next = new_node;
	return (new_node);
}
