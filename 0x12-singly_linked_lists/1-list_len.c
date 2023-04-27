#include "lists.h"

/**
 * list_len - Counts the elements of a list_t
 * @h: linked list
 *
 * Return: num of nodes in h
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
