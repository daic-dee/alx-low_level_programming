#include "main.h"

/**
 * print_binary - function that returns the value of a bit at a given index
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int curr;
	int i, ct = 0;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;
		if (curr & 1)
		{
			_putchar('1');
			ct++;
		}
		else if (ct)
			_putchar('0');
	}
	if (!ct)
		_putchar('0');
}
