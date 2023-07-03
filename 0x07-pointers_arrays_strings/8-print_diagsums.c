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
	int i, d1, d2;

	d1 = 0;
	d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i * i];
		d2 += a[i * (size - i - 1)];
	}

	printf("%d, %d", d1, d2);
}
