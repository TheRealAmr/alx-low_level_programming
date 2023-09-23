#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - function of 2 arguments
 * @head: double pointer
 * @str: string
 * Return: NULL if failed, else address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *start;
	unsigned int len = 0;

	while (str[len])
		len++;

	start = malloc(sizeof(list_t));
	if (!start)
		return (NULL);

	start->str = strdup(str);
	start->len = len;
	start->next = (*head);
	(*head) = start;

	return (*head);
}
