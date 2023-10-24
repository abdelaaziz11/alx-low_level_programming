#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * free_listint_safe - frees a listint_t list
 * @h: poiter to pointer
 * Return; size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *tmp;

	current = *h;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		size++;
		current = tmp;
	}
	*h = NULL;
	return (size);
}
