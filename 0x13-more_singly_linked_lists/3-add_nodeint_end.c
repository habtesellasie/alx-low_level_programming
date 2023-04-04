#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node
 * @head: A pointer to the address
 * @n: The integer for the new node
 * Return: If the function fails - NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newest, *last;

	newest = malloc(sizeof(listint_t));
	if (newest == NULL)
		return (NULL);

	newest->n = n;
	newest->next = NULL;

	if (*head == NULL)
		*head = newest;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newest;
	}

	return (*head);
}

