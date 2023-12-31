#include "lists.h"

/**
 * print_dlistint - print all elements of a list
 *
 * @h: the doubly linked list
 *
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
