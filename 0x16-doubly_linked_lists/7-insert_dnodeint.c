#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to list
 * @idx: index of inserting position
 * @n: data for new node insertion
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_nd = malloc(sizeof(dlistint_t)), *temp_nd = *h;

	if (new_nd)
	{
		new_nd->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				new_nd->next = *h;
				(*h)->prev = new_nd;
			}
			*h = new_nd;
			return (new_nd);
		}
		while (i < idx - 1 && temp_nd)
		{
			temp_nd = temp_nd->next;
			i++;
		}
		if (temp_nd)
		{
			if (temp_nd->next)
				temp_nd->next->prev = new_nd;
			new_nd->next = temp_nd->next;
			new_nd->prev = temp_nd;
			temp_nd->next = new_nd;
			return (new_nd);
		}
	}
	return (NULL);
}
