#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * flip_bits - WWWWWWWW
 * @n: WWWWWWWW
 * @m: WWWWWWWW
 * Return: WWWWWWWWW
 */
unsigned int flip_bits(unsigned long int n, unsigned int m)
{
	unsigned long int x = (n ^ m), mask = 1;
	unsigned int bits = 0;

	while (mask <= x)
	{
		bits += (mask & x ? 1 : 0);
		mask <<= 1;
	}

	return (bits);
}
