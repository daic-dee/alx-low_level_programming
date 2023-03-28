#include "main.h"
/**
 * rev_string - Function to reverse a string
 * @s: string value
 * Return: 0
 */
void rev_string(char *s)
{
	char reversed = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		count--;
		reversed = s[i];
		s[i] = s[count];
		s[count] = reversed;
	}
}
