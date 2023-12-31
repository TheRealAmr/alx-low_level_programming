#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - a function that returns the sum of all the data
 * @head: struct pointer
 * Return: 0 if list is empty
*/

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
