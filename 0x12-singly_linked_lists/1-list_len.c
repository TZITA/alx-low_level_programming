#include "lists.h"

/**
 * list_len - entry point
 * @h: structure
 *
 * Return: Integer.
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
