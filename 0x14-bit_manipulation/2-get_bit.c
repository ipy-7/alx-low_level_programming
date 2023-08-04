#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * get_bit - WWWWWWWW
 * @n: WWWWWWWW
 * @idx: WWWWWWWW
 * Return: WWWWWWWWW
 */
int get_bit(unsigned long int n, unsigned int idx)
{
	unsigned int i = 0;

	if (idx > 63)
		return (-1);

	while (n && i < idx)
	{
		i++;
		n >>= 1;
	}

	return (n & 1);
}
