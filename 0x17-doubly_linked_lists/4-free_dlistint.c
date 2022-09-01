#include "lists.h"

/**
 * free_dlistint - e p
 * @head: head
 *
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	
	while (tmp != NULL)
	{
		dlistint_t * next = tmp->next;
		free(tmp);
		tmp = next;
	}
}	
