#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - a function that deletes the head node of listint_t
 * @head: double pointer
 * Return: 0 if linked list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *saver;
	unsigned int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	saver = (*head)->next;
	free(*head);
	*head = saver;

	return (data);
}
