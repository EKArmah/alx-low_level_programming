#include "lists.h"

/**
 * print_list - print all elements of a linked list
 * @h: linked list
 *
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t node_counter = 0;

	if (!h)
	{
		return (node_counter);
	}
	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		h = h->next;
		node_counter++;
	}
	return (node_counter);
}
