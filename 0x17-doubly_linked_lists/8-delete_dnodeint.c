#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 or -1
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a_n = *head;
	dlistint_t *d_n = *head;
	unsigned int i;
	unsigned int count = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = d_n->next;
		free(d_n);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	i = index - 1;
	while (a_n && count != i)
	{
		count++;
		a_n = a_n->next;
	}

	if (count == i && a_n)
	{
		d_n = a_n->next;
		if (d_n->next)
		d_n->next->prev = a_n;
		a_n->next = d_n->next;
		free(d_n);
		return (1);
	}

	return (-1);
}
