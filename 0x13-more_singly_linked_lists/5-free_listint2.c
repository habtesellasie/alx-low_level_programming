#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Frees a listint_t list
 * @head: A pointer to the address
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
