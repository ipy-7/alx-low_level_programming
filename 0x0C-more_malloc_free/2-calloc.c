#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - WWWWWWWWW
 * @nmemb: WWWWWWWWWW
 * @size: WWWWWWWW
 * Description: WWWWWWWWWWW
 * Return: pointer to the allocated memory
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = (char *)malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}

	return ((void *)p);
}
