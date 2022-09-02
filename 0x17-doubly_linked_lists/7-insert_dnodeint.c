#include "lists.h"

/**
 * insert_dnodeint_at_index - e p
 * @h: head
 * @idx: index
 * @n: data
 *
 * Return: Address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	tmp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;
	new->prev = tmp->prev;
	if (new->next != NULL)
	{
		new->next->prev = new;
	}
	return (new);
}
