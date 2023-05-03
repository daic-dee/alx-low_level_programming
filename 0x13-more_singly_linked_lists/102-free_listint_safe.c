#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 * @h: pointer to the first node
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int res;
	listint_t *val;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		res = *h - (*h)->next;
		if (res > 0)
		{
			val = (*h)->next;
			free(*h);
			*h = val;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}
