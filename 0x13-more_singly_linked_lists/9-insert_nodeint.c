#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to pointer to listint_t
 * @idx: index to insert new node
 * @n: data for new node
 *
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_nod;
	unsigned int count = 0;

	new_nod = malloc(sizeof(listint_t));

	if (new_nod == NULL)
	{
		return (NULL);
	}
	new_nod->n = n;

	temp = *head;
	for (count = 0; count < idx; count++)
	{
		if (temp)
		{
			temp = temp->next;
		}
		else
		{
			free(new_nod);
			return (NULL);
		}
	}
	new_nod->next = temp->next;
	temp->next = new_nod;
	return (*head);
}
