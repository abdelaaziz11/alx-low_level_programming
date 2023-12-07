#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head
 * Return: number ofnodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *new = h;
	size_t count = 0;

	while (new)
	{
		printf("%i\n", new->n);
		count++;
		new = new->next;
	}
	return (count);
}
