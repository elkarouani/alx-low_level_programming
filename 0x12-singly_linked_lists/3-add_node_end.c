#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: first node of the list
 * str: string value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp_node = *head;
	int len = 0;

	if (!new_node)
		return (NULL);

	while (*(str + len))
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	while (temp_node)
		temp_node = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}
