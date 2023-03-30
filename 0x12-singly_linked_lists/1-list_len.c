#include "lists.h"

/**
 * list_len - Finds the number of elets in a list
 * @h: The linked list_t
 * Return: The num of h
 */
size_t list_len(const list_t *h)
{
	size_t elets = 0;

	while (h)
	{
		elets++;
		h = h->next;
	}

	return (elets);
}

