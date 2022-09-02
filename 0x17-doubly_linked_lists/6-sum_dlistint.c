#include "lists.h"

/**
 * sum_dlistint - e p
 * @head: head
 *
 * Return: Sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	if (tmp == NULL)
	{
		return (0);
	}
	int sum = tmp->n;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		sum += tmp->n;
	}
	return (sum);
}
