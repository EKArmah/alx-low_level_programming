#include "lists.h"

/**
 * list_len - print number of elements in a linked list
 * @h: linked list
 *
 * Return: number of nodes in list
 */

size_t list_len(const list_t *h)
{
	size_t node_counter = 0;

	if (!h)
	{
		return (node_counter);
	}
	while (h != NULL)
	{
		node_counter++;
		h = h->next;
	}
	return (node_counter);
}
