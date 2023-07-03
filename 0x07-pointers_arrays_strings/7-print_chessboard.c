#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_chessboard - WWWWWWW
 * @a: WWWWWWWWWW
 * Description: WWWWWWWWW
 */
void print_chessboard(char *a[8])
{
	int i, j, rows;

	rows = int(sizeof(*a)) / 8;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
