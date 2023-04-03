#include "lists.h"

/**
 * add_node_end - adds a new node at end of a list_t list
 * @head: pointer to current linked list to append
 * @str: string for new node
 *
 * Return: address of new node or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tru_tail, *temp;

	tru_tail = malloc(sizeof(list_t));
	if (!tru_tail)
	{
		return (NULL);
	}

	tru_tail->str = strdup(str);
	tru_tail->len = strlen(str);
	tru_tail->next = NULL;

	/*If head is null, return tru_tail*/
	if (*head == NULL)
	{
		*head = tru_tail;
		return (*head);
	}

	/* Parse to end of head*/
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = tru_tail;

	return (*head);
}
