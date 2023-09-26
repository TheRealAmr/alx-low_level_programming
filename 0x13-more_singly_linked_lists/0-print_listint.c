#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints arguments of h
 * @h: nodes of the single linked lists
 * Description: prints all the elements of a listint_t list
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	unsigned int len = 0, node = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		len = len + 1;
		temp = temp->next;
	}

	while (h != NULL)
	{
		if (h->n == NULL)
			return (0);

		printf("%d\n", len);

		h = h->next;
		node++;
	}

	return (node);
}
