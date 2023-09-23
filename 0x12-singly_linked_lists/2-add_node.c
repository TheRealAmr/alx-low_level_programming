#include <stdio.h>
#include "lists.h"

/**
 * list_len - function with the h argument
 * @h: pointer as argument for the structure
 * Description: returns the number of elements in a linked list_t list
 * Return: number of elements
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
