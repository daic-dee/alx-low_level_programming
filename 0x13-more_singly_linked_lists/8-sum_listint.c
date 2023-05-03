#include "lists.h"
/**
 * sum_listint - function taht calculates the sum of all elements
 * @head: first node in the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *val = head;

	while (val)
	{
		result += val->n;
		val = val->next;
	}
	return (result);
}
