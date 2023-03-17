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
	n = rand() - RAND_MAX / 2;
	int l = n % 10;

	if (l > 5)
		printf("Last digit of %d and is greater than 5\n", n);
	else if (l == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (l < 0 && l > 0)
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	return (0);
}
