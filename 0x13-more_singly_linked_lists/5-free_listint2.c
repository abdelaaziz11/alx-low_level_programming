#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - Frees a listint_t list
 * @head: point to pointer
 * Return: number elements
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head, *tmp;

	if (head == NULL)
		return;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
