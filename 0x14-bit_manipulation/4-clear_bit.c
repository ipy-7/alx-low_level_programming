#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * clear_bit - WWWWWWWW
 * @n: WWWWWWWW
 * @idx: WWWWWWWW
 * Return: WWWWWWWWW
 */
int clear_bit(unsigned long int *n, unsigned int idx)
{
	if (idx > 63)
		return (-1);

	(*n) &= ~(1 << idx);
	return (1);
}
