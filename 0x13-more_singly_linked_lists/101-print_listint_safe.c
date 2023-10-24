#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * found_listint_loop - finds a loop
 * @head: pointer list
 * Return: address of node or NULL
 */
listint_t *found_listint_loop(listint_t *head)
{
	listint_t *next, *last;

	if (head == NULL)
		return (NULL);

	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);
		for (next = head; next != last; next = next->next)
			if (next == last->next)
				return (last->next);
	}
	return (NULL);
}

/**
 * print_listint_safe - prints a linked list
 * @head: head of list
 * Return: number of node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t length = 0;
	int l;
	listint_t *l_node;

	l_node = found_listint_loop((listint_t *) head);

	for (length = 0, l = 1; (head != l_node || l) && head != NULL; length++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == l_node)
			l = 0;
		head = head->next;
	}

	if (l_node != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (length);
}
