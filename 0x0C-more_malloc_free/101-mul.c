#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * find_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 (Succes)
 */
int find_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}
/**
 * str_len - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _error - error handler
*/
void _errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int l1, l2, len, i, val, d1, d2, *res, j = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !find_digit(str1) || !find_digit(str2))
		_errors();
	l1 = str_len(str1);
	l2 = str_len(str2);
	len = l1 + l2 + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		res[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = str1[l1] - '0';
		val = 0;
		for (l2 = str_len(str2) - 1; l2 >= 0; l2--)
		{
			d2 = str2[l2] - '0';
			val += res[l1 + l2 + 1] + (d1 * d2);
			res[l1 + l2 + 1] = val % 10;
			val /= 10;
		}
		if (val > 0)
			res[l1 + l2 + 1] += val;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			j = 1;
		if (j)
			_putchar(res[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
