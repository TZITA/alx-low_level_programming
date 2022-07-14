#include "lists.h"

/**
 * print_list - entry point
 * @h: list_t type structure
 *
 * Return: Int.
 */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		if (h->str != NULL)
		{
			printf("[%u] %s", h->len, h->str);
			printf("\n");
		}
		h = h->next;	
		cnt++;
	}
	return (cnt);
}
