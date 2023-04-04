#include "lists.h"

/**
 * free_listint2 - frees a listint_t by setting head to NULL
 * @head: pointer to a pointer to a struct
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *temp1;

	temp1 = *head;
	while (temp1)
	{
		temp = temp1;
		temp1 = temp1->next;
		free(temp);
	}
	free(temp1);
}
