#include "lists.h"

/**
 * free_listint - e p
 * @head: struct
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
