#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes a node within an index
 * @index: the nodes list
 * @head: struct double pointer
 * Return: 1 if it succeeded and -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = *head;
	listint_t *finder;

	if (temp == NULL)
		return (-1);

	while (*head && index)
	{
		if (!temp)
			return (-1);
		if (j == index - 1)
			break;
		temp = temp->next;
		++j;
	}
	if (index)
	{
		finder = temp->next->next;
		free(temp->next);
		temp->next = finder;
	}
	else
	{
		*head = (*head)->next;
		free(temp);
	}

	return (1);
}
