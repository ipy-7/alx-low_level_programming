#include <stdio.h>
#include "main.h"

/**
 * _memcpy - WWWWWWW
 * @dest: WWWWWWWWWW
 * @src: WWWWWWWWWWW
 * @n: WWWWWWWWWWWW
 * Description: WWWWWWWWW
 * Return: a pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
