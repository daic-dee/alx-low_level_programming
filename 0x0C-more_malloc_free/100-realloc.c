#include <stdlib.h>
#include "main.h"
/**
 * *_realloc -function taht  reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory
 * @new_size: new size of the new memory block
 * Return: pointer newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	char *old_str;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	str = malloc(new_size);
	if (!str)
		return (NULL);
	old_str = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			str[i] = old_str[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			str[i] = old_str[i];
	}
	free(ptr);
	return (str);
}
