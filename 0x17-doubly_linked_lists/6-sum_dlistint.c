#include "lists.h"

/**
 * sum_dlistint - e p
 * @head: head
 *
 * Return: Sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = head->n;
	dlistint_t *tmp;

	if (head->next == NULL)
	{
		return (0);
	}
	tmp = head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		sum += tmp->n;
	}
	return (sum);
}
