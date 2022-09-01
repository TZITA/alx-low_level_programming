#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - e p
 * @h: head
 *
 * Return: Number of elements in ddl
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count += 1;
	}
	return (count);
}
