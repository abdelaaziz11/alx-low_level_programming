#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - add node
 * @head: head of list
 * @n: number of list
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
