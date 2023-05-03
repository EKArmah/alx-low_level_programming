#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at nth position
 * @head: pointer to pointer to listint_t
 * @idx: position of new node
 * @n: new node data
 *
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx,
		int n)
{
	listint_t *new_node, *temp;
	unsigned int counter;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	temp = *head;
	for (counter = 0; (counter < idx - 1) && temp; counter++)
	{
		temp = (temp)->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
