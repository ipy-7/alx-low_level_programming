#include <stdio.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - WWWWWWWW
 * @b: WWWWWWWW
 * Return: WWWWWWWWW
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, i;

	if (!b)
		return (0);

	b = strrev(b);
	x = 0;
	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] == '1')
		{
			x += pow(2, i);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}

	return (x);
}
