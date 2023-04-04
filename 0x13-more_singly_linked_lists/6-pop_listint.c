#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t
 * @head: A pointer to the address
 * Return: If the linked list is empty - 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int r;

	if (*head == NULL)
		return (0);

	temp = *head;
	r = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (r);
}

