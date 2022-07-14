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
		if(h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			cnt++;
		}
	}
	printf("\n");
	return (cnt);
}
