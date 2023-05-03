#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_val;
	listint_t *val = *head;

	new_val = malloc(sizeof(listint_t));
	if (!new_val)
		return (NULL);
	new_val->n = n;
	new_val->next = NULL;

	if (*head == NULL)
	{
		*head = new_val;
		return (new_val);
	}

	while (val->next)
	val = val->next;
	val->next = new_val;
	return (new_val);
}

