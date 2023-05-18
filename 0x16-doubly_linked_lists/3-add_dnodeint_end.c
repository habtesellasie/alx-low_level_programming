#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to list head
 * @n: integer to be included in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp_nd = NULL, *new_nd = malloc(sizeof(dlistint_t));

	if (new_nd)
	{
		new_nd->n = n;
		if (*head)
		{
			temp_nd = *head;
			while (temp_nd->next)
				temp_nd = temp_nd->next;
			temp_nd->next = new_nd;
			new_nd->prev = temp_nd;
		}
		else
			*head = new_nd;
	}
	return (new_nd);
}
