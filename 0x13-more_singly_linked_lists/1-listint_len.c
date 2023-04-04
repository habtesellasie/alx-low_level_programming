#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * @head: A pointer to the head
 * Return: The number of elements
 */
size_t listint_len(const listint_t *head)
{
	size_t nodes = 0;

	while (head)
	{
		nodes++;
		head = head->next;
	}

	return (nodes);
}


