#include "lists.h"

/**
 * delete_nodeint_at_index - ep
 * @head: head pointer
 * @index: index
 *
 * Return: int.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *tmp1 = *head;
	unsigned int i;

	if (tmp1 == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp1);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (tmp1->next == NULL)
		{
			return (-1);
		}
		tmp1 = tmp1->next;
	}
	tmp = tmp1->next;
	tmp1->next = tmp->next;
	free(tmp);
	return (1);
}
