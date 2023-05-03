#include <stdlib.h>
#include "main.h"
/**
 * _count - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int _count(char *s)
{
	int i, j, k;

	i = 0;
	k = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			k++;
		}
	}
	return (k);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array
 */
char **strtow(char *str)
{
	char **res, *val;
	int i, k = 0, l = 0, w, c = 0, s, e;

	while (*(str + l))
		l++;
	w = _count(str);
	if (w == 0)
		return (NULL);
	res = (char **) malloc(sizeof(char *) * (w + 1));
	if (res == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				e = i;
				val = (char *) malloc(sizeof(char) * (c + 1));
				if (val == NULL)
					return (NULL);
				while (s < e)
					*val++ = str[s++];
				*val = '\0';
				res[k] = val - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			s = i;
	}
	res[k] = NULL;
	return (res);
}
