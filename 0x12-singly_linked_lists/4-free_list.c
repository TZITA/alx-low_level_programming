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
	list_t *s_node;
	
	c_node = head;

	while (c_node != NULL)
	{
		s_node = c_node->next;
		free(c_node);
		c_node = s_node;
	}
}
