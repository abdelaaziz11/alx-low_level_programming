#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - insret new node at given position
 * @head: pointer listint
 * @idx: integer unsigned input
 * @n: integer input
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int count = 0;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	if (count != idx)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
