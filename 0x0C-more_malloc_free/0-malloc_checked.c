#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - WWWWWWWWW
 * @b: WWWWWWWWWW
 * Description: WWWWWWWWWWW
 * Return: pointer to the allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	else
		return (p);
}
