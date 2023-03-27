#include "main.h"
/**
 * swap_int - function to swap pointers
 * @a: vaue to be swapped
 * @b: value to be swapped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
