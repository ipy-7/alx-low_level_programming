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
	unsigned int i, len1, len2, j;

	len1 = strlen(a);
	len2 = strlen(*a);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
