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
		free(tmp);
		tmp = tmp->next;
	}
}
