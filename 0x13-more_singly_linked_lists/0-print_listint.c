#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked listof type listint_t to be printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
