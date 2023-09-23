#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a "list_t" list
 * @h: nodes of the single linked lists
 * D
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	unsigned int counter;

	counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
