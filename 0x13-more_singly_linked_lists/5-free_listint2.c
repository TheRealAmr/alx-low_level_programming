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

	while (head)
	{
		freer = head->next;
		free(head);
		head = NULL;
	}
}
