#include "lists.h"

/**
 * free_listint_safe - free linked list safely
 * @h: head pointer of a linked list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;

	while (h)
	{
		tmp = h->next;
		free(h);
		h = tmp;
	}

	if (h == NULL)
		return (NULL);
}
