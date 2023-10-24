#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - delete nodes at index of listint_t
 * @head: point to pointer the haed of list
 * @index: input index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *tmp;
	unsigned int i;

	if (head == NULL ||	*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL ||	current->next == NULL)
		return (-1);

	tmp = current->next;
	current->next = tmp->next;

	free(tmp);
	return (1);
}
