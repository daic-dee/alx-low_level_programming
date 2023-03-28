#include "main.h"

/**
 * _puts - puts blank line after string
 *@str: string value
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
