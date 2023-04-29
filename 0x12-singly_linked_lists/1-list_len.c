#include <stdlib.h>
#include "lists.h"

/**
 * list_len - gives number o elements in a linked list
 * @h: pointns to the list_t list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
