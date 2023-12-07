#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - add node at the end
 * @head: head of nodes
 * @n: number
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *no = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!no)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		while (no->next)
			no = no->next;
		new->prev = no;
		no->next = new;
	}

	return (new);
}
