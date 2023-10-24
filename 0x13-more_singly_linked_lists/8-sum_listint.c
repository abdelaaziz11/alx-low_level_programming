#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * sum_listint - returns the sum of all data (n)
 * @head: pointer list
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (current->next != NULL)
	{
		current = current->next;
		sum += current->n;
	}
	
	return (sum);
}
