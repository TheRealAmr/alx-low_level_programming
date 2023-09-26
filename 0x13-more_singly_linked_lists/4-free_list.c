#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function with the head argument
 *
 * @head: a single linked list
 *
 * Description: function the frees up the list
 *
 * Return: Nothing
*/

void free_listint(listint_t *head);
{
	listint_t *free_er;

	while (head)
	{
		free_er = head->next;
		free(head);
		head = free_er;
	}
}
