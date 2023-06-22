#include <stdio.h>
#include "main.h"

/**
 * print_triangle - wWWWWWWWWW
 * @size: WWWWWWWWWW
 *
 * Description: WWWWWW
 */
void print_triangle(int size)
{
	int sp, i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		sp = size - i - 1;
		for (j = 0; j < sp; j++)
		{
			_putchar(' ');
		}

		for (j = sp; j < size; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
