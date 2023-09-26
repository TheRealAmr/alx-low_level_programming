#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function with the head argument
 *
 * @head: pointer to struct
 *
 * Description: function that frees up the list
 *
 * Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *freer;

	if (*head == NULL || head == NULL)
		return ;

	while (*head)
	{
		freer = (*head)->next;
		free(*head);
		*head = freer;
	}

	*head = NULL;
}
