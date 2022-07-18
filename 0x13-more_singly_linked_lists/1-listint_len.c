#include "lists.h"

/**
 * listint_len - entry point
 * @h: struct
 *
 * Return: struct.
 */

size_t listint_len(const listint_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
