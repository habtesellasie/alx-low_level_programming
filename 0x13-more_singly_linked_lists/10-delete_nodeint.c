#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node
 * @head: A pointer to the address
 * @i: The index of the node to be deleted
 * Return: On success - 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int i)
{
	listint_t *temp, *cop = *head;
	unsigned int nod;

	if (cop == NULL)
		return (-1);

	if (i == 0)
	{
		*head = (*head)->next;
		free(cop);
		return (1);
	}

	for (nod = 0; nod < (i - 1); nod++)
	{
		if (cop->next == NULL)
			return (-1);

		cop = cop->next;
	}

	temp = cop->next;
	cop->next = temp->next;
	free(temp);
	return (1);
}

