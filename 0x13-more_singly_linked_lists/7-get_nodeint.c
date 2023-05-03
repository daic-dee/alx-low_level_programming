#include "lists.h"
/**
 * get_nodeint_at_index -function that  returns the node at a certain index
 * @head: first node in the linked list
 * @index: index of the node
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *value = head;

	while (value && j < index)
	{
		value = value->next;
		j++;
	}
	return (value ? value : NULL);
}
