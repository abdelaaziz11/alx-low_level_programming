#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_l - finds a loop
 * @head: poiter list
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

/**
 * free_listint_safe - frees a listint list
 * @h: pointer to pointer list
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *p, *l_node;
	size_t length;
	int l = 1;

	if (h == NULL || *h == NULL)
		return (0);

	l_node = find_listint_l(*h);
	for (length = 0; (*h != l_node || l) && *h != NULL; *h = p)
	{
		length++;
		p = (*h)->next;
		if (*h == l_node && l)
		{
			if (l_node == l_node->next)
			{
				free(*h);
				break;
			}
			length++;
			p = p->next;
			free((*h)->next);
			l = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (length);
}
