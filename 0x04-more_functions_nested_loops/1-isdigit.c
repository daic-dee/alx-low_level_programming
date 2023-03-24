#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: Character to be checked
 * Return: 1 for success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
