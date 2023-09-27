#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: struct pointer
 * Return: address of the node where the loop starts, or NULL if there is no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pointer, *finish;

	if (!head)
		return (NULL);

	for (finish = head->next; finish != NULL; finish = finish->next)
	{
		if (finish == finish->next)
			return (finish);

		for (pointer = head; pointer != finish; pointer = pointer->next)
			if (pointer == finish->next)
				return (finish->next);
	}

	return (NULL);
}
