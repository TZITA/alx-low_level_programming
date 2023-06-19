#include "lists.h"

/**
 * print_listint - entry point
 * @h: Struct
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	int cnt = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *) &head, head->n);
		head = head->next;
		cnt++;
	}
	return (cnt);
}
