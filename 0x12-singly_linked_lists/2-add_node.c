#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 * @h: A pointer
 * @str: The string
 * Return: If the function fails - NULL
 */
list_t *add_node(list_t **h, const char *str)
{
	list_t *newest;
	char *dup_string;
	int len;

	newest = malloc(sizeof(list_t));
	if (newest == NULL)
		return (NULL);

	dup_string = strdup(str);
	if (dup_string == NULL)
	{
		free(newest);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newest->str = dup_string;
	newest->len = len;
	newest->next = *h;

	*h = newest;

	return (newest);
}

