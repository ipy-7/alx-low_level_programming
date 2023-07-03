#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagsums - WWWWWWW
 * @a: WWWWWWWWWW
 * @size: wWWWWWWWWWW
 * Description: WWWWWWWWW
 */
void print_diagsums(int *a, int size)
{
	long int i, d1, d2;

	d1 = 0;
	d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[(i * size) + i];
		d2 += a[(i * size) + size - i - 1];
	}

	printf("%ld, %ld\n", d1, d2);
}
