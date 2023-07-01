#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list to be printed
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	list_t *node;

	if (h == NULL)
		return (0);
	node = h;

	while(node != NULL)
	{
		if (!node->str)
			printf("[%d] %s\n", node->len, "(nil)");
		else
			printf("[%d] %s\n", node->len, node->str);
		
		node = node->next;
		len++;
	}

	return (len);
}
