#include "main.h"

/**
 * flip_bits - function that returns the number of bits you 
 * would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int curr;
	unsigned long int cl = n ^ m;
	int i, ct = 0;

	for (i = 63; i >= 0; i--)
	{
		curr = cl >> i;
		if (curr & 1)
			ct++;
	}
	return (ct);
}
