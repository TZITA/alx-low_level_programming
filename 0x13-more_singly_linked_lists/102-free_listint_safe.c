#include "lists.h"

/**
 * free_listint - e p
 * @head: struct
 *
 * Return: Nothing.
 */

void free_listint_safe(listint_t **h)
{
	listint_t *tmp;

	while (h)
	{
		tmp = h->next;
		free(h);
		h = tmp;
	}
}
