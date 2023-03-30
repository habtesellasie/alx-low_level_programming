#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a newest node at the end
 * @h: A pointer
 * @str: The string
 * Return: If the function fails - NULL
 */
list_t *add_node_end(list_t **h, const char *str)
{
	char *dup;
	int len;
	list_t *newest, *lastest;

	newest = malloc(sizeof(list_t));
	if (newest == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(newest);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newest->str = dup;
	newest->len = len;
	newest->next = NULL;

	if (*h == NULL)
		*h = newest;

	else
	{
		lastest = *h;
		while (lastest->next != NULL)
			lastest = lastest->next;
		lastest->next = newest;
	}

	return (*h);
}

