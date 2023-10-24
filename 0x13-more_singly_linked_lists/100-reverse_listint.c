#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * reverse_listint - reverse a listint_t a linked list
 * @head: pointer to pointer
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prouvis = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = prouvis;
		prouvis = current;
		current = next;
	}
	*head = prouvis;
	return (*head);
}
