#include "lists.h"
#include <stdlib.h>
size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t
 * Return: If the list is not looped - 0
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *slow, *fast;
	size_t nodes = 1;

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
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}

			return (nodes);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the address
 * Return: The size of the list that was freed
 * Description: The function sets the head to NULL
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t node, i;

	node = looped_listint_count(*h);

	if (node == 0)
	{
		for (; h != NULL && *h != NULL; node++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (i = 0; i < node; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (node);
}

