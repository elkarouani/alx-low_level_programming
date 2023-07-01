#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: first node of the linked list
 * @str: the string value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int len = 0;

	if (!new_node)
		return (NULL);

	while (*(str + len))
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = head;

	return (new_node);
}
