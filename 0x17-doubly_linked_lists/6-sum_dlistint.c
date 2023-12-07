#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: head of nodes
 * Return: sum of all data OR 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *n = head;
	int sum = 0;

	while (n)
	{
		sum += n->n;
		n = n->next;
	}
	return (sum);
}
