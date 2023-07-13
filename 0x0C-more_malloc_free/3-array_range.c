#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - WWWWWWWWW
 * @min: WWWWWWWWWW
 * @max: WWWWWWWW
 * Description: WWWWWWWWWWW
 * Return: pointer to the allocated memory
 *
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
	{
		p[i] = min;
	}

	return (p);
}
