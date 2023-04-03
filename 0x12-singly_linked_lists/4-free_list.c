#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
		free_list(head);
	}
}
