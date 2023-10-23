#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - returns the numbers elements of listint_t list
 * @h: input list
 * Return: number elements
 */
size_t listint_len(const listint_t *h)
{
	size_t current = 0;

	while (h)
	{
		h = h->next;
		current++;
	}
	return (current);
}
