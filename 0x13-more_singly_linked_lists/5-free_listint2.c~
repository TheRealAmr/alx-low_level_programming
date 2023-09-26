#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function with the head argument
 *
 * @head: pointer to struct
 *
 * Description: function that frees up the list
 *
 * Return: Nothing
*/

void free_listint(listint_t *head)
{
	listint_t *freeit;

	while (head)
	{
		freeit = head->next;
		free(head);
		head = freeit;
	}
}
