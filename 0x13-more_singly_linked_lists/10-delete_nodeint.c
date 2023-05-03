#include "lists.h"
/**
 * delete_nodeint_at_index -function that deletes at a certain index
 * @head: pointer to the first element
 * @index: index of the node to be delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *res = *head;
	listint_t *val = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(res);
		return (1);
	}
	while (i < index - 1)
	{
		if (!res || !(res->next))
			return (-1);
		res = res->next;
		i++;
	}
	val = res->next;
	res->next = val->next;
	free(val);
	return (1);
}

