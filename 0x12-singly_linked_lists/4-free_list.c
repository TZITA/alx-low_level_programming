#include "lists.h"

/**
 * free_list - entry point
 * @head: structure
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
