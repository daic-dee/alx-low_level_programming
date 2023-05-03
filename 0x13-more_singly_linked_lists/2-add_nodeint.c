#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: success, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *val;

	val = malloc(sizeof(listint_t));
	if (!val)
		return (NULL);
	val->n = n;
	val->next = *head;
	*head = val;
	return (val);
}
