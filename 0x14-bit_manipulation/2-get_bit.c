#include "main.h"

/**
 * get_bit -function tthat returns the value of a
 * bit at an index in a decimal number
 * @n: number to search
 * @index: index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);
	val = (n >> index) & 1;
	return (val);
}
