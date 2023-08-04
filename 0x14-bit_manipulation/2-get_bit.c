#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * power - WWWWWWWWWW
 * @x: WWWWWWWW
 * @y: WWWWWWWW
 * Return: WWWWWW
 */
int power(unsigned int x, unsigned int y)
{
	return (y == 0 ? 1 : x * power(x, y - 1));
}

/**
 * get_bit - WWWWWWWW
 * @n: WWWWWWWW
 * @idx: WWWWWWWW
 * Return: WWWWWWWWW
 */
int get_bit(unsigned long int n, unsigned int idx)
{
	unsigned int i = 0;

	while (n && i < idx)
	{
		i++;
		n >>= 1;
	}

	return (n & 1);
}
