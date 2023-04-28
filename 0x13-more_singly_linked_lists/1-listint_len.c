#include "lists.h"

/**
 * listint_len - determine number of elements of a listint_t list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
