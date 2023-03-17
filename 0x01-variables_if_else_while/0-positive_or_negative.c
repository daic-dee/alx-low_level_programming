#include <stdio.h>
#include <stdlib.h>
/**
 * main -A program that prints if number is positive or negative
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	n = rand() % 201 - 100;
	if (n > 0)
	{
		printf("%d is a positive", n);
	}
	else if (n < 0)
	{
		printf("%d is a negative", n);
	}
	else
	{
		printf("%d is neither positive nor negative.", n);
	}
	return (0);
}

