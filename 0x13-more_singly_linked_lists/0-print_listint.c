#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements
 * @head: A pointer to the head
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t nodes = 0;

	while (head)
	{
		nodes++;
		printf("%d\n", head->n);
		head = head->next;
	}

	return (nodes);
}

