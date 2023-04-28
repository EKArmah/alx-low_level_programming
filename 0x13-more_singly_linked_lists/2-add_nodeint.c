#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of the listint_t
 * @head: pointer to a pointer to a linked list
 * @n: n value of listint_t
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
