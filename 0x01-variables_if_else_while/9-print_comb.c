#include <stdio.h>
/**
 * main - print all combinations
 * Return: 0
 */

int main(void)
{
	int i;

	putchar('0');
	for (i = 1; i < 10; i++)
		putchar(',');
		putchar(' ');
		putchar(i + '0');
	return (0);
}
