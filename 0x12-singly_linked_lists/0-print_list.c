#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t
 * @h: linked list
 *
 * Return: num of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (counter);
}
