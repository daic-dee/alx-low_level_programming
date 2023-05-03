#include "lists.h"
#include <stdio.h>

size_t loopListint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loopListint_len -function that returns the number of unique nodes
 * @head: A pointer to the head
 * Return: number of nodes
 */
size_t loopListint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
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
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = loopListint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

