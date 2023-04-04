#include "lists.h"

/**
 * listint_len - determine number of elements in a linked list, listint_t
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		count = 1;
	}

	while (h->next)
	{
		count++;
		h = h->next;
	}

	return (count);
}
