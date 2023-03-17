#include <stdio.h>
/**
 * main - program to print numbers in base
 * Return: 0
 */
int main(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
		putchar(b);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
