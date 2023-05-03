#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node in a linked list
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_val;
	listint_t *res = *head;

	new_val = malloc(sizeof(listint_t));
	if (!new_val || !head)
		return (NULL);
	new_val->n = n;
	new_val->next = NULL;
	if (idx == 0)
	{
		new_val->next = *head;
		*head = new_val;
		return (new_val);
	}
	for (i = 0; res && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_val->next = res->next;
			res->next = new_val;
			return (new_val);
		}
		else
			res = res->next;
	}
	return (NULL);
}
