#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @h: A pointer to the list_t list.
 */
void free_list(list_t *h)
{
	list_t *temp;

	while (h)
	{
		temp = h->next;
		free(h->str);
		free(h);
		h = temp;
	}
}

