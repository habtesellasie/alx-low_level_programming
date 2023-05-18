#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at the given positionz
 * @hd: double pointer to list
 * @index: index of inserting position
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **hd, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *bffr_node = *hd, *temp_nd = *hd;

	if (index == 0 && *hd)
	{
		if ((*hd)->next)
		{
			*hd = (*hd)->next;
			(*hd)->prev = NULL;
			free(temp_nd);
		}
		else
			*hd = NULL;
		return (1);
	}
	while (i < index - 1 && bffr_node)
	{
		bffr_node = bffr_node->next;
		i++;
	}
	if (bffr_node)
	{
		temp_nd = bffr_node->next;
		if (temp_nd->next)
			temp_nd->next->prev = bffr_node;
		bffr_node->next = temp_nd->next;
		free(temp_nd);
		return (1);
	}
	return (-1);
}
