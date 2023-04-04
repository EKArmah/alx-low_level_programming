#include "lists.h"

/**
 * add_nodeint_end - add a new node to the end of a listint_t
 * @head: pointer to a pointer to an listint_t
 * @n: int - data
 *
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail, *temp;

	tail = malloc(sizeof(listint_t));

	if (tail == NULL)
	{
		return (NULL);
	}

	temp = *head;
	if (temp == NULL)
	{
		tail->n = n;
		tail->next = NULL;
		*head = tail;
		return (*head);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	tail->n = n;
	tail->next = NULL;
	temp->next = tail;

	return (*head);
}
