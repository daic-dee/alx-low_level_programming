#include <stdio.h>
/**
 * main - print all combinations
 * Return: 0
 */

int main(void)
{
	int i;

	putchar('0');
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
