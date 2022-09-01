#include "lists.h"

/**
 * delete_dnodeint_at_index - e p
 * @head: head
 * @index: index
 *
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	tmp = *head;
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free_dlistint(tmp);
	return 1;
}
