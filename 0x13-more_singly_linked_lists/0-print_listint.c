#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - Prints all elements of a linstint_t list
 * @h: input list
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t current = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		current++;
	}

	return (current);
}
