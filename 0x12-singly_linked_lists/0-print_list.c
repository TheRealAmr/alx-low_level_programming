#include "lists.h"

/**
 * print_list - prints all the elements of a "list_t" list
 * @h: nodes of the single linked lists
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t node_intervals = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		node_intervals++;
		h = h->next;
	}

	return (node_intervals);
}
