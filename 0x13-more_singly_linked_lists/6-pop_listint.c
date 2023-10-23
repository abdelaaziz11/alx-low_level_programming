#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * pop_listint - deletes the head of listint_t and return the gead nodes n
 * @head: point to pointer list
 * Return: number of elements
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL ||	*head == NULL)
	{
		return (0);
	}
	current = *head;
	n = current->n;
	*head = current->next;
	free(current);
	return (n);
}
