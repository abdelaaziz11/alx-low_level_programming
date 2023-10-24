#include "lists.h"
#include <stdlib.h>

/**
 * rev_rec - recursively reverses
 * @first: first node to reverse
 * @second: second node
 * Return: nothing
 */
listint_t *rev_rec(listint_t *first, listint_t *second)
{
	listint_t *next, *prev = NULL;

	next = first;
	while (next->next != second)
	{
		prev = next;
		next = next->next;
	}

	if (prev != NULL)
		prev->next = first;
	second = first->next;
	first->next = next->next;
	if (first != next && second != first)
		second = rev_rec(second, first);
	next->next = second;
	return (next);
}

/**
 * reverse_listint - reverses a listint list
 * @head: list
 * Return: return a new node of list
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);

	*head = rev_rec(*head, NULL);
	return (*head);
}
