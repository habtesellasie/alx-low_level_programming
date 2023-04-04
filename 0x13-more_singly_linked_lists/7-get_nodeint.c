#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node
 * @head: A pointer to the head of the listint_t list
 * @i: The index of the node to locate - indices start at 0
 * Return: If the node does not exist - NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int i)
{
	unsigned int nod;

	for (nod = 0; nod < i; nod++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

