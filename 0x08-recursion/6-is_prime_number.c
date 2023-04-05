#include "main.h"
int iss_prime_number(int n, int i);
/**
 * is_prime_number - checks if given value is prime number
 * @n: input value
 * Return: 1 if prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (iss_prime_number(n, n - 1));
}
/**
 * iss_prime_number - checks if given value is prime number
 * @n: input value
 * @i: value
 * Return: 1 if prime
 */
int iss_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (iss_prime_number(n, i - 1));
}
