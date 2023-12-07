#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of nodes
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *act, *next_n;

	if (head)
	{
		act = head;
		next_n = head->next;
		while (next_n)
		{
			free(act);
			act = next_n;
			next_n = next_n->next;
		}
		free(act);
	}
}
