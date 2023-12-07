#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of nodes
 * @index: nth node
 * Return: the nth node of a dlistint_t or NULL
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *n = head;
	unsigned int count = 0;

	while (n && count != index)
	{
		count++;
		n = n->next;
	}
	if (n && count == index)
		return (n);
	return (NULL);
}
