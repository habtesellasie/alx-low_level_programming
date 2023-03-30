#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of list
 * @h: The list_t
 * Return: The num of h
 */

size_t print_list(const list_t *h)
{
	size_t nodd = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodd++;
		h = h->next;
	}

	return (nodd);
}

