#include "lists.h"

/**
 * free_listint - frees a listint
 * @head: linked list to free
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head;
		head = head->next;
		free(temp);
		free_listint(head);
	}
}
