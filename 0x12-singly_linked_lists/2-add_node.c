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
	list_t *new;
	int j;

	for (j = 0; dup_str[j] != '\0'; j++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = j;
	new->next = *head;

	*head = new;
	return (*head);
}
