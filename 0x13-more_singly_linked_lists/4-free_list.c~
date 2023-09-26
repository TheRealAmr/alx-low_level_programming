#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function with the head argument
 *
 * @head: a single linked list
 *
 * Description: function the frees up the list
 *
 * Return: Norhing
*/

void free_list(list_t *head)
{
	list_t *joker;

	while (head)
	{
		joker = head->next;
		free(head->str);
		free(head);
		head = joker;
	}
}
