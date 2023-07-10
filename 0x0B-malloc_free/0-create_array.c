#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - WWWWWWWWWWW
 * @size: WWWWWWWWW
 * @c: WWWWWWWWWWW
 * Description: WWWWWWWWWW
 * Return: A pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *)malloc(size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
