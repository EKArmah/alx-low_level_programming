#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a listint_t
 * @head: pointer to a pointer to linked list
 * @n: int -data
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tru_head;

	tru_head = malloc(sizeof(listint_t));
	if (tru_head == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		tru_head->n = n;
		tru_head->next = NULL;
		*head = tru_head;
	}
	else
	{
		tru_head->n = n;
		tru_head->next = *head;
		*head = tru_head;
	}
	return (*head);

}
