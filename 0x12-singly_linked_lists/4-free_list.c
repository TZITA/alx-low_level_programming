#include "lists.h"

/**
 * free_list - entry point
 * @head: structure
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *c_node;

	while (head != NULL)
	{
		c_node = head;
		head = head->next;
		free(c_node);
	}
}
