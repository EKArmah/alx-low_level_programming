#include "lists.h"

/**
 * print_listint - prints all elements of a linked list, listint_t
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);
	return (count);
}
