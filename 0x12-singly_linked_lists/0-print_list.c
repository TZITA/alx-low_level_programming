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

	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}

	else
	{
		while (h != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			cnt++;
		}
		printf("\n");
	}
	return (cnt);
}
