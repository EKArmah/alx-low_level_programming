#include "lists.h"

/**
 * get_nodeint_at_index - retrieves a node
 * @head: pointer to linked list
 * @index: index of desired node
 *
 * Return: pointer to needed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	for (count = 0; count < index; count++)
	{
		if (head->next)
		{
			head = head->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
