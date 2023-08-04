#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * flip_bits - WWWWWWWW
 * @n: WWWWWWWW
 * @m: WWWWWWWW
 * Return: WWWWWWWWW
 */
int flip_bits(unsigned long int n, unsigned int m)
{
	unsigned long int x = n ^ m;
	int bits = 0;


	while (x)
	{
		bits += (x & 1);
		x >>= 1;
	}

	return (bits);
}
