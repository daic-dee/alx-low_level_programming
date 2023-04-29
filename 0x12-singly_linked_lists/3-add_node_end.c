#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to the list_t list
 * @str: new string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list;
	list_t *p = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_list = malloc(sizeof(list_t));
	if (!new_list)
		return (NULL);
	new_list->str = strdup(str);
	new_list->len = len;
	new_list->next = NULL;
	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}
	while (p->next)
	p = p->next;
	p->next = new_list;
	return (new_list);
}
