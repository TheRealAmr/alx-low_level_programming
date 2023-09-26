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
	unsigned int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len = len + 1;
		h = h->next;
	}

	return (len);
}
