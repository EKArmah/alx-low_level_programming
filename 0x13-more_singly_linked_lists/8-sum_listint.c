#include "lists.h"

/**
 * sum_listint - sums all data from listint_t
 * @head: linked list
 *
 * Return: sum or 0 if list is NULL
 */

int sum_listint(listint_t *head)
{
	int head_sum = 0;

	while (head)
	{
		head_sum += head->n;
		head = head->next;
	}
	return (head_sum);
}
