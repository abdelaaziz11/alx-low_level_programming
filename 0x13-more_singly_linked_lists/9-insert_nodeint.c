#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given position
 * @head: A pointer to a pointer to the head of the list
 * @idx: The index to insert the new node
 * @n: The data for the new node
 * Return: Address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int count = 0;

	if (!head)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (count != idx - 1 || !current)
	{
	free(new_node);
	return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
