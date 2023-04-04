#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique node
 * @head: A pointer to the head of the listint_t
 * Return: If the list is not looped - 0
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				node++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				node++;
				slow = slow->next;
			}

			return (node);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely
 * @head: A pointer to the head of the listint_t
 * Return: The number of node in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}

