#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function args with head and str
 *
 * @head: pointer to list_t
 * @str: new string
 *
 * Return: NULL if it fails, else address of the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *start;
	list_t *copy = *head;
	unsigned int length = 0;

	while(str[length])
		length++;

	start = malloc(sizeof(list_t));
	if (!start)
		return (NULL);

	start->str = strdup(str);
	start->length = length;
	start->next = NULL;

	if (*head == NULL)
	{
		*head = start;
		return (start);
	}

	while (copy->next)
		copy = copy->next;

	copy->next = start;

	return (start);
}
