#include "lists.h"

/**
 * sum_listint - sums all data of each node of a listint_t
 * @head: pointer to a listint_t
 *
 * Return: 0 if empty, else sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
