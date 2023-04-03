#include "lists.h"

/**
 * add_node - adds a new node to beginning of linked list
 * @head: pointer tolist to add new node to
 * @str: str of node
 *
 * Return: address of new node or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tru_head;

	/*Initialize new head*/
	tru_head = malloc(sizeof(list_t));

	/* Return NULL if malloc failed*/
	if (tru_head == NULL)
	{
		return (NULL);
	}
	tru_head->len = strlen(str);
	tru_head->str = strdup(str);

	/* Assign next node of new head to the current head*/
	if (*head == NULL)
	{
		tru_head->next = NULL;
		*head = tru_head;
	}
	else
	{
		tru_head->next = *head;
		*head = tru_head;
	}

	return (*head);
}
