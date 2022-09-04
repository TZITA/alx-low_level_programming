#include "lists.h"

/**
 * find_listint_loop - ep
 * @head: head pointer
 *
 * Return: Struct.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *f;
	listint_t *s;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	s = head->next;
	f = head->next->next;
	while (f)
	{
		if (s == f)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (s);
		}
		s = s->next;
		f = f->next->next;
	}
	return (NULL);
}

