#include "lists.h"

/**
 * get_dnodeint_at_index - e p
 * @head: head
 * @index: index
 *
 * Return: node at n index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		if (NULL == (head->next))
		{
			return (NULL);
		}
		else
		{
			head = head->next;
		}
	return (head);
}
