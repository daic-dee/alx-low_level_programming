#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a linked list
 * @h: points list to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t si = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		si++;
	}
	return (si);
}
