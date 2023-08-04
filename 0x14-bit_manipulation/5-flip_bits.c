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
	unsigned int bits = 0;

	while (n || m)
	{
		bits += ((n & 1) != (m & 1));
		m >>= 1;
		n >>= 1;
	}

	return (bits);
}
