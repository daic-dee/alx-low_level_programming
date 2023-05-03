#include "lists.h"

/**
 * free_listint2 - a fuction that  frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *result;

	if (head == NULL)
		return;
	while (*head)
	{
		result = (*head)->next;
		free(*head);
		*head = result;
	}
	*head = NULL;
}
