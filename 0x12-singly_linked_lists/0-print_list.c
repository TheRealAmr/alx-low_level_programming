#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints arguments of h
 * @h: nodes of the single linked lists
 * Description: prints all the elements of a list_t list
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned int node;

	node = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node++;
	}

	return (node);
}
