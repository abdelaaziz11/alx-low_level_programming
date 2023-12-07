#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * @h: head of nodes
 * @idx: index
 * @n: number data
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h, *new;
	unsigned int i, count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (*h);
	}

	i = idx - 1;
	while (aux && count != i)
	{
		count++;
		aux = aux->next;
	}

	if (count == i && aux)
	{
		new->prev = aux;
		new->next = aux->next;
		if (aux->next)
			aux->next->prev = new;
		aux->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
