#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function with the h argument
 * @h: pointer as argument for the structure
 * Description: returns the number of elements in a linked listint_t list
 * Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	unsigned int noe = 0;
	/* noe = number of elements */

	while (h != NULL)
	{
		noe++;
		h = h->next;
	}

	return (noe);
}
