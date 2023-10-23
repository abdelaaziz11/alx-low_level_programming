#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - return the nth node of listint_t
 * @head: list pointer
 * @index: integer input
 * Return: nth
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int n = 0;

	while (current != NULL)
	{
		if (n == index)
		{
			return (current);
		}
		current = current->next;
		n++;
	}
	return (NULL);
}
