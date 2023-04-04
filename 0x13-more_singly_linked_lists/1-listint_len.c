#include "lists.h"

/**
 * listint_len - determine number of elements in a linked list, listint_t
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 1;

	while (h->next)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
