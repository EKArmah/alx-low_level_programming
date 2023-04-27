#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of the linked list
 * @head - a pointer to a linked list
 * @str: string to be used in new node
 *
 * Return: Address of the new node or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head != NULL)
	{
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = *head;
		*head = new_node;
	}

	return (*head);
}
