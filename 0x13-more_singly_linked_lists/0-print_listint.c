#include "lists.h"

/**
 * print_listint - entry point
 * @h: Struct
 *
 * Return: Struct
 */

size_t print_listint(const listint_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
