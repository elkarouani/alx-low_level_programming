#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_track = head;
	listint_t *fast_track = head;

	if (!head)
		return (NULL);

	while (slow_track && fast_track && fast_track->next)
	{
		fast_track = fast_track->next->next;
		slow_track = slow_track->next;
		if (fast_track == slow_track)
		{
			slow_track = head;
			while (slow_track != fast_track)
			{
				slow_track = slow_track->next;
				fast_track = fast_track->next;
			}
			return (fast_track);
		}
	}

	return (NULL);
}
