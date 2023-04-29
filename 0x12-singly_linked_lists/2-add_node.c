#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node at the begining
 * @head: double pointer head
 * @str: to be duplicated
 * Return: Success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	while (str[len])
		len++;
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = len;
	node->next = (*head);
	(*head) = node;
	return (*head);
}
