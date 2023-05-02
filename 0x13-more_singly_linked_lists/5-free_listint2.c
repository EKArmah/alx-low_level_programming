#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: pointer to a pointer to a listint_t
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_del, *temp_trav;

	/*Temp_trav is used to traverse the listint_t*/
	temp_trav = *head;
	while ((temp_trav->next) != NULL)
	{
		/*Temp_del temporarily holds the current node and is freed*/
		temp_del = temp_trav;
		temp_trav = temp_trav->next;
		free(temp_del);
	}
	*head = NULL;
}
