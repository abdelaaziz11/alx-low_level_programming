#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_l - finds a loop
 * @head: pointer list
 * Return: address of node, NULL
 */
listint_t *find_listint_l(listint_t *head)
{
	listint_t *next, *last;

	if (head == NULL)
		return (NULL);
	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);
		for (next = head; next != last; next = next->next)
			if (next == last->next)
				return (last->next);
	}

	return (NULL);
}
