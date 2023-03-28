#include "main.h"
/**
 * puts2 - function that prints 1 character out of two
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;
	int c = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	c = i - 1;
	for (o = 0; o <= c; o++)
	{
		if (o % 2 == 0)
			_putchar(str[o]);
	}
	_putchar('\n');
}
