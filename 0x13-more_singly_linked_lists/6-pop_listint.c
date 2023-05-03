#include "lists.h"

/**
 * pop_listint - deletes the head of a node of a listint_t and returns its data
 * @head: pointer to a pointer to a listint_t
 *
 * Return: data of node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head != NULL)
	{
		temp = *head;
		*head = temp->next;
		data = temp->n;
		free(temp);
	}
	else
	{
		return (0);
	}
	return (data);
}
