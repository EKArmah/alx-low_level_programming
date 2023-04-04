#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to pointer to linked list
 *
 * Return: head node's data or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	temp = *head;
	
	if (temp)
	{
		head_data = temp->n;
		*head = temp->next;
		free(temp);
		return(head_data);
	}

	free(temp);
	return (0);

}
