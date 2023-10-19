#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count_node = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count_node++;
	}
	return (count_node);
}
