#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t
 * @head: A pointer to the address
 * Return: A pointer to the first node of the reversed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *back;

	if (head == NULL || *head == NULL)
		return (NULL);

	back = NULL;

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}

	(*head)->next = back;

	return (*head);
}

