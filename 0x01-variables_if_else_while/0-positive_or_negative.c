#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -A program that prints if number is positive or negative
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() % 201 - 100;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is neither positive nor negative.", n);
	}
	return (0);
}

