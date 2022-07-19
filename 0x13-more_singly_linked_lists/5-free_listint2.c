#include "lists.h"

/**
 * free_listint2 - e p
 * @head: struct
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		free(tmp);
	}
	*tmp->n = NULL;
}
