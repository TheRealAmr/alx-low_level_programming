#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index -  a function that returns the nth node of a listint_t
 * @head: struct pointer
 * @index: the listint_t indexer
 * Return: NULL if the node does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
