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

	if (h == NULL)
		return (0);

	while(h != NULL)
	{
		if (!h->str)
			printf("[%d] %s\n", h->len, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		
		h = h->next;
		len++;
	}

	return (len);
}
