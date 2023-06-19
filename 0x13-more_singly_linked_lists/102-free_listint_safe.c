#include "lists.h"

/**
 * free_listint_safe - free linked list safely
 * @h: head pointer of a linked list
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
