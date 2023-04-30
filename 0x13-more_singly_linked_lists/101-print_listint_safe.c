#include "lists.h"

/**
 * print_listint_safe - function that print a linked list with a loop safely.
 * @head: pointer to the first element of the list
 * Return: count of elements in the list
 */
size_t print_listint_safe(listint *head)
{
	const listint_t *t_n = head;
	const listint_t *last_node = head;
	size_t count = 0;
	size_t new_value = 0;

	while (t_n)
	{
		printf("[%p] %d\n", (void *)t_n, t_n->n);
		count++;
		t_n = t_n->next;
		
		while (new_value < count)
		{
			if (t_n == last_node)
			{
				printf("-> [%p] %d\n", (void *)t_n, t_n->n);
				return (count);
			}
			last_node = last_node->next;
			new_value++;
		}
		if (!head)
			exit(98);
	}

	return (count);
}
