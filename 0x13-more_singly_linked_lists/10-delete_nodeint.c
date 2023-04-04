#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: ptr to ptr to listint_t
 * @index: index
 *
 *
 * Return; 1 if success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *buff;
	unsigned int count;

	temp = *head;
	for (count = 0; count < index - 1; count++)
	{
		if (temp->next)
		{
			temp = temp->next;
		}
		else
		{
			return (-1);
		}
	}
	if (temp->next->next)
	{
		buff = temp->next->next;
		free(temp->next);
		temp->next = buff;
	}
	else
	{
		buff = NULL;
		temp->next = buff;
	}

	return (1);
}
