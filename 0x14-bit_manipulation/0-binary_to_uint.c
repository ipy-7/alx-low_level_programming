#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * pow - WWWWWWWWWW
 * @x: WWWWWWWW
 * @y: WWWWWWWW
 * Return: WWWWWW
 */
int power(unsigned int x, unsigned int y)
{
	return (y == 0 ? 1 : x * power(x, y - 1));
}

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

	x = 0;
	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] == '1')
		{
			x += power(2, strlen(b) - i - 1);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}

	return (x);
}
