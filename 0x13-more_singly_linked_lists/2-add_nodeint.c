#include "lists.h"
11;rgb:0000/0000/0000#include <string.h>
#include <stdio.h>

/**
 * add_nodeint - function of 2 arguments
 * @head: double pointer
 * @n: string
 * Return: NULL if failed, else address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = (*head);
	(*head) = new_head;

	return (*head);
}
