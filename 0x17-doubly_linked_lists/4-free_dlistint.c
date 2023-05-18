#include "lists.h"
/**
 * free_dlistint - frees the dlistint_t list
 * @hd: pointer to list head
 */
void free_dlistint(dlistint_t *hd)
{
	if (hd)
	{
		free_dlistint(hd->next);
		free(hd);
	}
}
