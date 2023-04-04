#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node
 * @head: A pointer to the address
 * @n: The integer for the new node
 * Return: If the function fails - NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newest;

	newest = malloc(sizeof(listint_t));
	if (newest == NULL)
		return (NULL);

	newest->n = n;
	newest->next = *head;

	*head = newest;

	return (newest);
}

