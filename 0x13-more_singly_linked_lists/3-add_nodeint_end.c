#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - function with 2 arguments
 * @head: double pointer
 * @n: string
 * Return: NULL if failed, else address of start element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;
	listint_t *temp;

	last_node = malloc(sizeof(listint_t));

	last_node->n = n;
	last_node->next = NULL;

	temp = *head;
	while (temp != NULL)
		temp = temp->next;

	temp->next = last_node;

	return (last_node);
}
