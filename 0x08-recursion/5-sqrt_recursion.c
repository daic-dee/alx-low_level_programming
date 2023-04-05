#include "main.h"
int _sqrt_recursions(int n, int i);
/**
 * _sqrt_recursion - return square root
 * @n: input value
 * Return: Success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursions(n, 0));
}
/**
 * _sqrt_recursions - recurse to find natural square root of number
 * @n: input value
 * @i: value
 * Return: Success
 */
int _sqrt_recursions(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursions(n, i + 1));
}
