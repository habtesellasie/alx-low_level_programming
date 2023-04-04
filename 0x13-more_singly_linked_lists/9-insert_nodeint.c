#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 * @head: A pointer to the address
 * @index: The index of the listint_t
 * @n: The integer for the new node to contain
 * Return: If the function fails - NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *newest, *cop = *head;
	unsigned int nod;

	newest = malloc(sizeof(listint_t));
	if (newest == NULL)
		return (NULL);

	newest->n = n;

	if (index == 0)
	{
		newest->next = cop;
		*head = newest;
		return (newest);
	}

	for (nod = 0; nod < (index - 1); nod++)
	{
		if (cop == NULL || cop->next == NULL)
			return (NULL);

		cop = cop->next;
	}

	newest->next = cop->next;
	cop->next = newest;

	return (newest);
}

