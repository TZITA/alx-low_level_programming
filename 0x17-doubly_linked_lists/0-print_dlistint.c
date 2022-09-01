#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - e p
 * @h: node
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count += 1;
	}
	return (count);
}
