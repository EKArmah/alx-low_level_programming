#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: pointer to listint_t
 * @index: nth node to retrieve
 *
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head != NULL && index > 0)
	{
		for (counter = 0; (counter < index) && head; counter++)
		{
			head = head->next;
		}
	}
	else
	{
		return (NULL);
	}
	return (head);
}
