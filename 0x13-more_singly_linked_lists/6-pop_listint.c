#include "lists.h"
#include "lists.h"

/**
 * pop_listint -a function that deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: success or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *value;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	value = (*head)->next;
	free(*head);
	*head = value;

	return (number);
}
