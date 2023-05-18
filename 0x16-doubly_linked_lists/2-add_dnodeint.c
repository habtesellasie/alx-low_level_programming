#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to list head
 * @n: integer to be included in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nd = malloc(sizeof(dlistint_t));

	if (new_nd)
	{
		new_nd->n = n;
		new_nd->prev = NULL;
		new_nd->next = *head; /* New Head points to old_head */
		if (*head)
			(*head)->prev = new_nd; /* Old Head points to new_head */
		*head = new_nd;
	}
	return (new_nd);
}
