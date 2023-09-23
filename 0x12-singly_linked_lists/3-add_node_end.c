#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function with 2 arguments
 * @head: double pointer
 * @str: string
 * Return: NULL if failed, else address of start element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *start;
	list_t *swap = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	start = malloc(sizeof(list_t));
	if (!start)
		return (NULL);

	start->str = strdup(str);
	start->len = len;
	start->next = NULL;

	if (*head == NULL)
	{
		*head = start;
		return (start);
	}

	while (swap->next)
		swap = swap->next;

	swap->next = start;

	return (start);
}
