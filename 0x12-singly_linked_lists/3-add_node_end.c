#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node at the end of list_t list
 * @head: pointer to pointer
 * @str: string
 * Return: address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!(new_node))
		return (NULL);

	new_node->str = strdup(str);
	if (!(new_node->str))
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
