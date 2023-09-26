#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint - function of 2 arguments
 * @head: double pointer
 * @n: string
 * Return: NULL if failed, else address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	unsigned int *new_head;
	unsigned int len = 0;

	new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);

	new_head->n = strdup(n);
	new_head->next = (*head);
	(*head) = new_head;

	return (*new_head);
}
